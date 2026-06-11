//Overarching testbench for singlecycle processor
//WHY IS THIS ONE DIFFERENT THAN A TESTBENCH FOR A SINGLE COMPONENT?
//1.) This testbench is different because it tests the whole processor, not one component.
//2.) The processor tests many modules together & uses clock/reset heavily
//3.) Full execution test & runs until PC reaches its end.

//In general, the following testbench will answer the question:
//Can the entire CPU fetch, decode, execute, access memory, branch, and writeback correctly?

`timescale 1ns/1ps

//CLOCK TIMING MACROS:
//HalfClockPeriod - Time between clock toggles
//ClockPeriod - Full time of clock cycle

`define STRLEN 32
`define HalfClockPeriod 60
`define ClockPeriod (`HalfClockPeriod * 2)

module SingleCycleProcessor_testbench;

    //Testbench signals
    logic resetl; //active low reset

    //Processor clock
    logic CLK;
    
    //inputs of the processor: everything within is handled
    logic [63:0] startpc;
    logic [63:0] currentpc;
    logic [63:0] MemtoRegOut;

    int passed;
    int num_tests;

    //watchdog timer
    logic [15:0] watchdog;
    //What is watchdog timer?
    //Watchdog timer is a simulation/debugging logic that prevents
    //frozen simulations and catch PC bugs.

    //instantiating processor
    singlecycle uut(
        .resetl(resetl),
        .CLK(CLK),
        .startpc(startpc),
        .currentpc(currentpc),
        .MemtoRegOut(MemtoRegOut)
    );

    //Generate waveform file
    initial begin
        $dumpfile("SingleCycleTest.vcd");
        $dumpvars(0, SingleCycleProcessor_testbench);
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
                $display("All tests passed. Single-Cycle Processor Passed.");
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
        while(currentpc < 64'h30) begin
            @(posedge CLK);
            @(negedge CLK);

            $display("CurrentPC: %h", currentpc);
        end
        //final program result check
        passTest(
            MemtoRegOut,
            64'hF,
            "Results of Program 1"
        );
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
