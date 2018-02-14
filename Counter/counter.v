`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:35 02/12/2018 
// Design Name: 
// Module Name:    count 
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
module counter(clk, rst, ped, uphdnl, count);
   input clk, rst, ped, uphdnl;
   output reg [7:0] count;

   always @ (posedge clk, posedge rst)
      if (rst) count <= 8'b0; else
      if (ped &  uphdnl) count <= count + 8'b1; else
      if (ped & ~uphdnl) count <= count - 8'b1;
      
endmodule
