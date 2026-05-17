//optimize for systemVerilog
//Following testbench gives an overarching preview on 
//testbenches for pipelined processor...
`timescale 1ns/1ps

module NextPCLogic_testbench;
    logic [63:0] CurrentPC;
    logic [63:0] SignExtendImm;
    logic ALUZero, Branch, Uncondbranch;
    logic [63:0] NextPC;

    int passed;
    int num_tests;

    //Instatiate module
    NextPCLogic uut (
        .CurrentPC(CurrentPC),
        .NextPC(NextPC),
        .ALUZero(ALUZero),
        .Branch(Branch),
        .Uncondbranch(Uncondbranch),
        .SignExtendImm(SignExtendImm)
    );

    //Generating waveform file (using surfer instead of GTK)
    initial begin
        $dumpfile("NextPCLogicTest.vcd");
        $dumpvars(0, NextPCLogic_testbench);
    end

    //Task to determine if each individual test case passed or failed.
    task automatic passTest(
        input logic [63:0] actualOut,
        input logic [63:0] expectedOut,
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
        CurrentPC     = 64'd0;
        SignExtendImm = 64'd0;
        ALUZero       = 1'b0;
        Branch        = 1'b0;
        Uncondbranch  = 1'b0;
        passed        = 0;
        num_tests     = 10;

        // PC + 4 Tests
        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000000, 64'h0000000000000000, 1'b0, 1'b0, 1'b0};
        #40;
        passTest(NextPC, 64'h0000000000000004, "No branch from PC 0");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000100, 64'h0000000000000005, 1'b0, 1'b1, 1'b0};
        #40;
        passTest(NextPC, 64'h0000000000000104, "Branch disabled when ALUZero = 0");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000200, 64'h0000000000000008, 1'b1, 1'b0, 1'b0};
        #40;
        passTest(NextPC, 64'h0000000000000204, "Branch disabled when Branch = 0");

        // Conditional Branch Tests
        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000100, 64'h0000000000000004, 1'b1, 1'b1, 1'b0};
        #40;
        passTest(NextPC, 64'h0000000000000110, "Conditional branch positive offset");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000100, 64'hFFFFFFFFFFFFFFFF, 1'b1, 1'b1, 1'b0};
        #40;
        passTest(NextPC, 64'h00000000000000FC, "Conditional branch negative offset");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000400, 64'h0000000000000000, 1'b1, 1'b1, 1'b0};
        #40;
        passTest(NextPC, 64'h0000000000000400, "Conditional branch zero offset");

        // Unconditional Branch Tests
        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000200, 64'h0000000000000003, 1'b0, 1'b0, 1'b1};
        #40;
        passTest(NextPC, 64'h000000000000020C, "Unconditional branch positive offset");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000200, 64'hFFFFFFFFFFFFFFFE, 1'b0, 1'b0, 1'b1};
        #40;
        passTest(NextPC, 64'h00000000000001F8, "Unconditional branch negative offset");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'h0000000000000300, 64'h0000000000000002, 1'b0, 1'b1, 1'b1};
        #40;
        passTest(NextPC, 64'h0000000000000308, "Unconditional branch overrides ALUZero = 0");

        {CurrentPC, SignExtendImm, ALUZero, Branch, Uncondbranch} =
            {64'hFFFFFFFFFFFFFFF8, 64'h0000000000000001, 1'b1, 1'b1, 1'b0};
        #40;
        passTest(NextPC, 64'hFFFFFFFFFFFFFFFC, "Conditional branch near max address");

        // Print final summary
        allPassed(passed, num_tests);

        // End simulation (indicated simulation termination)
        $finish;

    end

endmodule