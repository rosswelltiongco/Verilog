`timescale 1ns / 1ps
//****************************************************************//
// File name: dflop.v
//
// Created by       Rosswell Tiongco on <10/01/18>. 
// Copyright © 2018 Rosswell Tiongco. All rights reserved.
// 
// 
// In submitting this file for class work at CSULB
// I am confirming that this is my work and the work
// of no one else. In submitting this code I acknowledge that
// plagiarism in student project work is subject to dismissal
// from the class. 
//****************************************************************//
module dflop(clk, rst, d, q);
   input      clk, rst;
   input             d;
   output reg        q;
   
   always @ (posedge clk, posedge rst)
      if   (rst) q <= 1'b0;
      else       q <=    d;

endmodule
