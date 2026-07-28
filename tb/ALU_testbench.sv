//optimize for systemVerilog
`timescale 1ns/1ps

module ALU_testbench;
    //testbench logic signals
    //replace reg&wire with logic
    logic [63:0] BusA, BusB;
    logic [3:0] ALUCtrl;
    logic [63:0] BusW;
    logic Zero;

    int passed;
    int num_tests;

    //Instatiate module
    ALU uut (
        .BusA(BusA),
        .BusB(BusB),
        .ALUCtrl(ALUCtrl),
        .BusW(BusW),
        .Zero(Zero)
    );

    //Generating waveform file (using surfer instead of GTK)
    initial begin
        $dumpfile("ALUTest.vcd");
        $dumpvars(0, ALUTest);
    end


    //Task to determine if each individual test case passed or failed.
    task automatic passTest(
        input logic [64:0] actualOut,
        input logic [64:0] expectedOut,
        input string testName
    );
        begin
            if(actualOut==expectedOut) begin
                $display("%s passed", testName); //systemVerilog syntax (%)
                passed++;
            end
            else begin
                $display("%s failed: got %x, expected %x",
                testName, actualOut, expectedOut);
            end
        end
    endtask


    //Task to determine how many test cases passed
    task automatic allPassed(
        input int passedCount,
        input int totalTests
    );
        begin
            if (passedCount == totalTests)
                $display("All tests passed");
            else
                $display("Some tests failed: %0d/%0d passed",
                         passedCount, totalTests);
        end
    endtask


    //Starting main test sequence


    initial begin

        // Initialize inputs
        BusA     = 64'd0;
        BusB     = 64'd0;
        ALUCtrl  = 4'd0;
        passed   = 0;
        num_tests = 16;

        // ADD example test
        {BusA, BusB, ALUCtrl} = {64'h1234, 64'hABCD0000, 4'h2}; //re-defining inputs for each test-case scenario
        #40; //ALU needs simulation time to recompute outputs, propagate and update signals.

        //running the inputs through the task
        passTest({Zero, BusW}, 65'h0ABCD1234, "ADD 0x1234, 0xABCD0000");




        // AND Tests
        {BusA, BusB, ALUCtrl} = {64'hFFFFFFFFFFFFFFFF, 64'h1234123412341234, 4'h0};
        #40;
        passTest({Zero, BusW}, 65'h01234123412341234, "AND all ones, 0x1234123412341234");


        {BusA, BusB, ALUCtrl} = {64'h0, 64'hAAAADDDDAAAADDDD, 4'h0};
        #40;
        passTest({Zero, BusW}, 65'h10000000000000000, "AND 0x0, 0xAAAADDDDAAAADDDD");

        {BusA, BusB, ALUCtrl} = {64'hF0F0F0F0F0F0F0F0, 64'hA1B2C3D4A1B2C3D4, 4'h0};
        #40;
        passTest({Zero, BusW}, 65'h0A0B0C0D0A0B0C0D0, "AND patterned inputs");

        // OR Tests
        {BusA, BusB, ALUCtrl} = {64'hFFFFFFFFFFFFFFFF, 64'h5678567856785678, 4'h1};
        #40;
        passTest({Zero, BusW}, 65'h0FFFFFFFFFFFFFFFF, "OR all ones, 0x5678567856785678");

        {BusA, BusB, ALUCtrl} = {64'h0, 64'h0, 4'h1};
        #40;
        passTest({Zero, BusW}, 65'h10000000000000000, "OR 0x0, 0x0");

        {BusA, BusB, ALUCtrl} = {64'hF0F0F0F0F0F0F0F0, 64'hABCD1234ABCD1234, 4'h1};
        #40;
        passTest({Zero, BusW}, 65'h0FBFDF2F4FBFDF2F4, "OR patterned inputs");


        // ADD Tests

        {BusA, BusB, ALUCtrl} = {64'h0, 64'h0, 4'h2};
        #40;
        passTest({Zero, BusW}, 65'h10000000000000000, "ADD 0x0, 0x0");

        {BusA, BusB, ALUCtrl} = {64'hF, 64'h1, 4'h2};
        #40;
        passTest({Zero, BusW}, 65'h00000000000000010, "ADD 0xF, 0x1");

        {BusA, BusB, ALUCtrl} = {64'h12341230, 64'h4, 4'h2};
        #40;
        passTest({Zero, BusW}, 65'h00000000012341234, "ADD 0x12341230, 0x4");


        // SUB Tests


        {BusA, BusB, ALUCtrl} = {64'h0, 64'h0, 4'h6};
        #40;
        passTest({Zero, BusW}, 65'h10000000000000000, "SUB 0x0, 0x0");

        {BusA, BusB, ALUCtrl} = {64'h10, 64'h1, 4'h6};
        #40;
        passTest({Zero, BusW}, 65'h0000000000000000F, "SUB 0x10, 0x1");

        {BusA, BusB, ALUCtrl} = {64'hAAAABBBB, 64'h2, 4'h6};
        #40;
        passTest({Zero, BusW}, 65'h000000000AAAABBB9, "SUB 0xAAAABBBB, 0x2");


        // PassB Tests


        {BusA, BusB, ALUCtrl} = {64'hAAAAAAAAAAAAAAAA, 64'h0, 4'h7};
        #40;
        passTest({Zero, BusW}, 65'h10000000000000000, "PassB with BusB = 0");

        {BusA, BusB, ALUCtrl} = {64'h0, 64'hFFFFFFFFFFFFFFFF, 4'h7};
        #40;
        passTest({Zero, BusW}, 65'h0FFFFFFFFFFFFFFFF, "PassB with BusB = all ones");

        {BusA, BusB, ALUCtrl} = {64'h1357135724682468, 64'hAABBAABBAABBAABB, 4'h7};
        #40;
        passTest({Zero, BusW}, 65'h0AABBAABBAABBAABB, "PassB patterned input");

        // Print final summary
        allPassed(passed, num_tests);

        // End simulation (indicated simulation termination)
        $finish;

    end

endmodule