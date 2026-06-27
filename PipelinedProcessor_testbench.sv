//Overarching testbench for the 5-stage pipelined processor.
//1.) This testbench is different because it tests the whole processor, not one component.
//2.) The processor tests many modules together & uses clock/reset heavily
//3.) Full execution test & runs until PC reaches its end.

`timescale 1ns/1ps

`define STRLEN 32
`define HalfClockPeriod 60
`define ClockPeriod (`HalfClockPeriod * 2)

module PipelinedProcessor_testbench;
    //Testbench signals:
    logic resetl;

    logic CLK;

    //inputs of processor - all logic signals within processors are handled in original .sv file

    logic [63:0] startpc;
    logic [63:0] currentpc;
    logic [63:0] MemtoRegOut;
    logic [63:0] CommittedResult; //stable, held copy of the last committed writeback

    int passed;
    int num_tests;

    //watchdog timer
    logic[15:0] watchdog;
    //Prevents frozen simulations and catch PC bugs

    PipelinedProcessor uut(
        .CLK(CLK),
        .resetl(resetl),
        .startpc(startpc),
        .currentpc(currentpc),
        .MemtoRegOut(MemtoRegOut),
        .CommittedResult(CommittedResult)
    );

    //Generating waveform file
    initial begin
        $dumpfile("PipelineProcessorTest.vcd");
        $dumpvars(0, PipelinedProcessor_testbench);
    end

    //passTest task
    //automatic means the task gets fresh local storage
    //everytime it is called. Thus two tasks can be called safely
    //without sharing the same internal variables.

    //ADJACENT TO A PYTHON FUNCTION
    task automatic passTest(
        input logic[63:0] actualOut,
        input logic[63:0] expectedOut,
        input string testName
    );
        begin
            if(actualOut==expectedOut) begin
                $display("%s passed", testName);
                passed++;
            end
            else begin
                $display("%s failed: got %x, expected %x", testName, actualOut, expectedOut);
            end
        end
    endtask

    task automatic allPassed(
        input int passedCount,
        input int totalTests
    );
        begin
            if(passedCount == totalTests) begin
                $display("All tests passed. 5-Stage Pipelined Processor Passed.");
            end
            else begin
                $display("Some tests failed.");
            end
        end
    endtask

    //MAIN TEST SEQUENCE...
    initial begin
        resetl = 1;
        startpc = 64'd0;
        CLK=0;

        passed=0;
        num_tests=1;

        //initialize watchdog
        watchdog = 0;

        //The following lines exist to initialize and
        //synchronize the processor before execution begins

        //processor relies heavily on sequential hardware,
        //thus you cannot just instantly start execution

        //Wait one clock cycle before beginning
        #(1 * `ClockPeriod); //let signal satbilize and give simulator time to initialize modules

        #1; //separate events slightly in simulation
        //avoid race conditions

        resetl = 0;
        //assert reset to start CPU cleanly

        startpc = 64'h0;

        //==================
        @(posedge CLK);
        @(negedge CLK);
        @(posedge CLK);
        //These lines of code synchronizes reset with actual processor timings
        //Three lines are used because processor is updated on negative edge, so
        //having one edge will not activate the sequential logic in the design
        //This makes the processor experience a full clock cycle while reset is active.

        resetl=1;
        //release reset


/*Power on CPU
↓
Initialize hardware safely
↓
Synchronize with clock
↓
Release reset
↓
Start executing program*/


        //running entire program
        while(currentpc < 64'h34) begin
            @(posedge CLK);
            @(negedge CLK);

            $display("CurrentPC: %h", currentpc);
        end

        //=================================================================================

        //drain the pipeline so the final instruction reaches writeback. CommittedResult
        //latches the last committed value inside the processor and HOLDS it, so the exact
        //drain count does not matter — a generous count is always safe.
        repeat(5) begin
            @(posedge CLK);
            @(negedge CLK);
        end

        //final program result check — just read one stable output port.
        //Program 2 computes 6*7=42, then 42-( (42&15)|6 ) = 28 = 0x1C.
        passTest(
            CommittedResult,
            64'h1C,
            "Results of Program 2"
        );
        //================================================================================
        //printing final summary
        allPassed(passed, num_tests);

        //ending simulation
        $finish;
    end


    //CLOCK GENERATOR
    always begin //this means to run 'forever' in a sense
        #`HalfClockPeriod CLK = ~CLK;
        #`HalfClockPeriod CLK = ~CLK;
        //Incrementing watchdog timer every full cycle
        watchdog++;
    end

    //Wathdog Timer implementation
    always_comb begin
        if(watchdog == 16'hFF) begin
            $display("Watchdog timer expired");
            $finish;
        end
    end
endmodule

/*
FINAL FLOW

Clock generator drives CLK
↓
Processor executes instructions
↓
currentpc changes
↓
while loop tracks progress
↓
watchdog kills simulation if stuck
*/
