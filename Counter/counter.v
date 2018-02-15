`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// File name: counter.v
// 
// 
// Created by        Rosswell Tiongco on 2/13/18
// Copyright © 2018  Rosswell Tiongco. All rights reserved.
//
// In submitting this file for class work at CSULB
// I am confirming that this is my work and the work
// of no one else. In submitting this code I acknowledge that
// plagiarism in student project work is subject to dismissal
// from the class
//////////////////////////////////////////////////////////////////////////////////
module counter(clk, rst, ped, uphdnl, count);
   input clk, rst, ped, uphdnl;
   output reg [7:0] count;

   always @ (posedge clk, posedge rst)
      if (rst) count <= 8'b0; else
      if (ped &  uphdnl) count <= count + 8'b1; else
      if (ped & ~uphdnl) count <= count - 8'b1;
      
endmodule
