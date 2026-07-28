//optimize for systemVerilog
`timescale 1ns/1ps

module RegisterFile_testbench;
    //testbench logic signals
    logic [4:0] readRegister1, readRegister2, writeRegister;
    logic regWrite;
    logic Clk;
    logic [63:0] writeData;
    logic [63:0] BusA, BusB;

    int passed;
    int num_tests;

    //Instatiate module
    RegisterFile uut (
        .readRegister1(readRegister1),
        .readRegister2(readRegister2),
        .writeRegister(writeRegister),
        .regWrite(regWrite),
        .Clk(Clk),
        .writeData(writeData),
        .BusA(BusA),
        .BusB(BusB)
    );

    //Generating waveform file (using surfer instead of GTK)
    initial begin
        $dumpfile("RegisterFileTest.vcd");
        $dumpvars(0, RegisterFile_testbench);
    end

    //Clock generation
    initial begin
        Clk = 1'b1;
        forever #20 Clk = ~Clk;
    end

    //Task to determine if each individual test case passed or failed.
    task automatic passTest(
        input logic [127:0] actualOut,
        input logic [127:0] expectedOut,
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
        readRegister1  = 5'd31;
        readRegister2  = 5'd31;
        writeRegister  = 5'd0;
        regWrite       = 1'b0;
        writeData      = 64'd0;
        passed         = 0;
        num_tests      = 6;

        // Register 31 Tests
        #40;
        passTest({BusA, BusB}, {64'd0, 64'd0}, "Read zero register on BusA and BusB");

        // Write to register 5
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd31, 5'd31, 5'd5, 1'b1, 64'h123456789ABCDEF0};
        #40;

        // Reading Register 5 thru BusA
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd5, 5'd31, 5'd5, 1'b0, 64'h123456789ABCDEF0};
        #40;
        // Testing thru pre-written task
        passTest({BusA, BusB}, {64'h123456789ABCDEF0, 64'd0}, "Write/read register 5 on BusA");




        // Read the same register from BusB
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd31, 5'd5, 5'd5, 1'b0, 64'h123456789ABCDEF0};
        #40;
        passTest({BusA, BusB}, {64'd0, 64'h123456789ABCDEF0}, "Read register 5 on BusB");




        // Write to register 10, then read both register 5 and register 10
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd31, 5'd31, 5'd10, 1'b1, 64'h0F0F0F0F0F0F0F0F};
        #40;

        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd5, 5'd10, 5'd10, 1'b0, 64'h0F0F0F0F0F0F0F0F};
        #40;
        passTest({BusA, BusB}, {64'h123456789ABCDEF0, 64'h0F0F0F0F0F0F0F0F}, "Read registers 5 and 10");




        // Register 31 should ignore writes and still read as zero
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd31, 5'd10, 5'd31, 1'b1, 64'hFFFFFFFFFFFFFFFF};
        #40;

        {readRegister1, readRegister2, writeRegister, regWrite, writeData} =
            {5'd31, 5'd10, 5'd31, 1'b0, 64'hFFFFFFFFFFFFFFFF};
        #40;
        passTest({BusA, BusB}, {64'd0, 64'h0F0F0F0F0F0F0F0F}, "Register 31 write ignored");




        //USER ADDED TESTCASES...
        //Write to Register 12 & 22, then read both Register 12 & 22
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} = 
            {5'd31, 5'd31, 5'd12, 1'b1, 64'h000000000000000A};
        #40;

        {readRegister1, readRegister2, writeRegister, regWrite, writeData} = 
            {5'd31, 5'd31, 5'd22, 1'b1, 64'h000000000000000B};
        #40;
        
        //reading the register is seen to verify if the write actually worked.
        {readRegister1, readRegister2, writeRegister, regWrite, writeData} = 
            {5'd12, 5'd22, 5'd31, 1'b0, 64'h0000000000000000};
        #40;
        passTest({BusA, BusB}, {64'h000000000000000A, 64'h000000000000000B}, "Read Register 12 & 22");
        #40;

        // Print final summary
        allPassed(passed, num_tests);

        // End simulation (indicated simulation termination)
        $finish;

    end

endmodule
