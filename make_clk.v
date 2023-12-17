`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    make_clk 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module make_clk(
    input MCLK,
    input RESET_IN,
    output reg CLOCK,
    output RESET_OUT
    );
    
    
    reg [26:0] counter;
    
    
    // CLOCK signal
    always @(posedge MCLK) begin
        // reset
        if (RESET_IN) begin
            counter <= 27'd0;
            CLOCK <= 1'b0;
        end
        else begin
            // if counter reaches desired timing: 2.5s (= 5s/2)
            // Spartan-3 FPGA Starter Kit Board has a 50 MHz clock oscillator
            if (counter == 27'd124999999) begin
                counter <= 27'd0;    // reset counter
                CLOCK <= ~CLOCK;    // invert CLOCK
            end
            else begin
                counter <= counter + 1;
            end
        end
    end
    
    // RESET_OUT signal
    assign RESET_OUT = RESET_IN;


endmodule
