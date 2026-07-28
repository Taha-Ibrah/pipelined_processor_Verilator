//optimize for systemVerilog
`timescale 1ns/1ps

module signExtender_testbench;
    //testbench logic signals
    //replace reg&wire with logic
    logic [25:0] Instr;
    logic [1:0] SignOp;
    logic [63:0] BusImm;

    int passed;
    int num_tests;

    //Instatiate module
    signExtender uut (
        .Instr(Instr),
        .SignOp(SignOp),
        .BusImm(BusImm)
    );

    //Generating waveform file (using surfer instead of GTK)
    initial begin
        $dumpfile("signExtenderTest.vcd");
        $dumpvars(0, signExtender_testbench);
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
        Instr     = 26'd0;
        SignOp    = 2'd0;
        passed    = 0;
        num_tests = 12;

        // I-type Tests: zero-extend Instr[21:10]
        {Instr, SignOp} = {26'h0000000, 2'b00};
        #40;
        passTest(BusImm, 64'h0000000000000000, "I-type immediate 0x000");

        {Instr, SignOp} = {26'h0000400, 2'b00};
        #40;
        passTest(BusImm, 64'h0000000000000001, "I-type immediate 0x001");

        {Instr, SignOp} = {26'h03FFC00, 2'b00};
        #40;
        passTest(BusImm, 64'h0000000000000FFF, "I-type immediate 0xFFF");

        // D-type Tests: sign-extend Instr[20:12]
        {Instr, SignOp} = {26'h0000000, 2'b01};
        #40;
        passTest(BusImm, 64'h0000000000000000, "D-type immediate 0x000");

        {Instr, SignOp} = {26'h0100000, 2'b01};
        #40;
        passTest(BusImm, 64'hFFFFFFFFFFFFFF00, "D-type negative immediate 0x100");

        {Instr, SignOp} = {26'h00FF000, 2'b01};
        #40;
        passTest(BusImm, 64'h00000000000000FF, "D-type positive immediate 0x0FF");

        // B-type Tests: sign-extend Instr[25:0]
        {Instr, SignOp} = {26'h0000000, 2'b10};
        #40;
        passTest(BusImm, 64'h0000000000000000, "B-type immediate 0x0000000");

        {Instr, SignOp} = {26'h2000000, 2'b10};
        #40;
        passTest(BusImm, 64'hFFFFFFFFFE000000, "B-type negative immediate 0x2000000");

        {Instr, SignOp} = {26'h1FFFFFF, 2'b10};
        #40;
        passTest(BusImm, 64'h0000000001FFFFFF, "B-type positive immediate 0x1FFFFFF");

        // CB-type Tests: sign-extend Instr[23:5]
        {Instr, SignOp} = {26'h0000000, 2'b11};
        #40;
        passTest(BusImm, 64'h0000000000000000, "CB-type immediate 0x00000");

        {Instr, SignOp} = {26'h0800000, 2'b11};
        #40;
        passTest(BusImm, 64'hFFFFFFFFFFFC0000, "CB-type negative immediate 0x40000");

        {Instr, SignOp} = {26'h07FFFE0, 2'b11};
        #40;
        passTest(BusImm, 64'h000000000003FFFF, "CB-type positive immediate 0x3FFFF");

        // Print final summary
        allPassed(passed, num_tests);

        // End simulation (indicated simulation termination)
        $finish;

    end

endmodule
