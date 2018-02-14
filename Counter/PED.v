`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:22:20 02/12/2018 
// Design Name: 
// Module Name:    PED 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PED(clk, rst, level, tick);
   input clk, rst;
   input level;
   output tick;
    
   reg delay_reg;
   
   always @(posedge clk, posedge rst)
      if (rst)
         delay_reg <= 1'b0;
      else
         delay_reg <= level;
   
   assign tick = ~delay_reg & level;
   
endmodule
