`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// File name: pixel_clk.v
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
//
// Slows down the clock  
////////////////////////////////////////////////////////////////////////////////// 
module pixel_clk(clk_in, reset, tick);
	input clk_in, reset;
   output tick;
   reg [10:0] count, n_count;
   
   assign tick = (count == 1000);
   
   always @(posedge clk_in, posedge reset)
      if (reset)
         count <= 10'b0;
      else
         count <= n_count;
         
   always @ (*)
      n_count = (tick) ? 10'b0 : count + 10'b1;
	
endmodule
