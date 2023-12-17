`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    output_logic 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module output_logic(
    input MCLK,
    input CLOCK,
    input HGREEN,
    input HLEFT,
    input HYELLOW,
    input HRED,
    input FLEFT,
    input FYELLOW,
    input FRED,
    input HS,
    input FS,
    output [7:0] LED,
    output reg [3:0] ANODE,
    output reg [7:0] SEG
    );
    
    
    //-------------------------------------------------------
    // define 7 segment display control values - active low
    //-------------------------------------------------------
    `define SEG_H 8'b1001_0001    // 'H'
    `define SEG_F 8'b0111_0001    // 'F'
    `define SEG_NO 8'b1111_1111    // (empty)
    
    
    wire SCLK;
    wire [1:0] iter;
    reg [17:0] counter = 18'd0;
    
    
    // Spartan-3 FPGA Starter Kit Board has a 50 MHz clock oscillator
    always @(posedge MCLK) begin
        counter <= counter + 1;
    end
    // SCLK signal - millisecond clock period (763 Hz)
    assign SCLK = counter[15];
    assign iter = counter[17:16];
    
    
    // LED signals - active high
    assign LED = {CLOCK, HRED, HYELLOW, HLEFT, HGREEN, FRED, FYELLOW, FLEFT};
    
    // ANODE control signals (Digit enable signals) - active low
    // SEG signals - active low
    always @(posedge SCLK) begin
        case (iter)
            2'd0: begin
                ANODE <= 4'b1110;
                SEG <= (FS ? `SEG_F : `SEG_NO);
            end
            2'd1: begin
                ANODE <= 4'b1101;
                SEG <= (HS ? `SEG_H : `SEG_NO);
            end
            2'd2: begin
                ANODE <= 4'b1011;
                SEG <= `SEG_NO;
            end
            2'd3: begin
                ANODE <= 4'b0111;
                SEG <= `SEG_NO;
            end
            default: begin
                ANODE <= 4'b1111;
                SEG <= `SEG_NO;
            end
        endcase
    end


endmodule
