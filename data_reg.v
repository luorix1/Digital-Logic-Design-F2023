`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    data_reg 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module data_reg(
    input MCLK,
    input HS_IN,
    input FS_IN,
    input HLEFT,
    input FLEFT,
    output reg HS_OUT,
    output reg FS_OUT
    );
    
    
    // HS_OUT signal
    always @(posedge MCLK) begin
        case ({HLEFT, HS_IN, HS_OUT})
            3'b000: HS_OUT <= 1'b0;
            3'b001: HS_OUT <= 1'b1;
            3'b010: HS_OUT <= 1'b1;
            3'b011: HS_OUT <= 1'b1;
            3'b100: HS_OUT <= 1'b0;
            3'b101: HS_OUT <= 1'b0;
            3'b110: HS_OUT <= 1'b0;
            3'b111: HS_OUT <= 1'b0;
            default: HS_OUT <= 1'b0;
        endcase
    end
    
    // FS_OUT signal
    always @(posedge MCLK) begin
        case ({FLEFT, FS_IN, FS_OUT})
            3'b000: FS_OUT <= 1'b0;
            3'b001: FS_OUT <= 1'b1;
            3'b010: FS_OUT <= 1'b1;
            3'b011: FS_OUT <= 1'b1;
            3'b100: FS_OUT <= 1'b0;
            3'b101: FS_OUT <= 1'b0;
            3'b110: FS_OUT <= 1'b0;
            3'b111: FS_OUT <= 1'b0;
            default: FS_OUT <= 1'b0;
        endcase
    end


endmodule
