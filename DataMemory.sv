//Datamemory module is provided in the initial ECEN350 lab manual...

//Purpose for DataMemory in Processor:
//The purpose is to store the program's runtime data.
//Items such as arrays, variables, structs, heap data can be stored in data memory

`timescale 1ns/1ps
`define SIZE 1024
//Below are signals going into/out of Data memory block in processor.
module DataMemory(
    output logic [63:0] ReadData,
    input logic [63:0] Address,
    input logic [63:0] WriteData,
    input logic MemoryRead, MemoryWrite, Clock
);
    //Datamemory is byte-addressable
    //Each memory location stores 8 bits=1 byte
    //Since SIZE=1024, this memory has 1024 bytes total
    logic [7:0] memBank [`SIZE-1:0];

    //describing initset task...
    //---------------------------------
    //This task writes one full 64-bit doubleword into memory.
    //
    //Memory itself is byte-addressable, so 64-bit value must be split
    //into 8 separate bytes.
    //
    //Example: initset(64'h0, 64'h0000000000000001);
    //
    //Stores:
    //  memBank[0] = data[63:56]
    //  memBank[1] = data[55:48]
    //          ...
    //  memBank[7]=data[7:0]
    // Most-Signficant-Byte is stored in the lowest address --> big endian
    task initset;
        input logic [63:0] addr;
        input logic [63:0] data;
        begin
            memBank[addr]     = data[63:56];
            memBank[addr + 1] = data[55:48];
            memBank[addr + 2] = data[47:40];
            memBank[addr + 3] = data[39:32];
            memBank[addr + 4] = data[31:24];
            memBank[addr + 5] = data[23:16];
            memBank[addr + 6] = data[15:8];
            memBank[addr + 7] = data[7:0];
        end
    endtask

    //initial memory contents
    // ---------------------------
    //block will run once at the start of simulation...
    //
    //These are not instructions.
    //These are data values stored in memory


    initial begin
        // Address 0x0 gets 0x1
        initset(64'h0,  64'h1);                  // Counter variable
        // Address 0x8 gets 0xA
        initset(64'h8,  64'ha);                  // Part of mask
        // Address 0x10 gets 0x5
        initset(64'h10, 64'h5);                  // Other part of mask
        // Address 0x18 gets large constant
        initset(64'h18, 64'h0ffbea7deadbeeff);   // Big constant
        // Address 0x20 gets 0
        initset(64'h20, 64'h0);                  // Clearing space
        
    // Add any extra data needed for your tests here.
    end

    //MemoryReadLogic:
    always_ff @(posedge Clock) begin

        if (MemoryRead) begin
            ReadData[63:56] <= memBank[Address];
            ReadData[55:48] <= memBank[Address + 1];
            ReadData[47:40] <= memBank[Address + 2];
            ReadData[39:32] <= memBank[Address + 3];
            ReadData[31:24] <= memBank[Address + 4];
            ReadData[23:16] <= memBank[Address + 5];
            ReadData[15:8]  <= memBank[Address + 6];
            ReadData[7:0]   <= memBank[Address + 7];
        end
    end

    //MemoryWriteLogic:
    //The #3 delay represents small memory write delay in simulation
    always_ff @(posedge Clock) begin

        if (MemoryWrite) begin
            memBank[Address]     <= #3 WriteData[63:56];
            memBank[Address + 1] <= #3 WriteData[55:48];
            memBank[Address + 2] <= #3 WriteData[47:40];
            memBank[Address + 3] <= #3 WriteData[39:32];
            memBank[Address + 4] <= #3 WriteData[31:24];
            memBank[Address + 5] <= #3 WriteData[23:16];
            memBank[Address + 6] <= #3 WriteData[15:8];
            memBank[Address + 7] <= #3 WriteData[7:0];
            // Useful for debugging:
            // $display("Writing Address:%h Data:%h", Address, WriteData);
        end
    end

endmodule