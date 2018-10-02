`timescale 1ns / 1ps
//****************************************************************//
// File name: PED.v
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
module PED(clk, rst, level, tick);
   input  clk, rst;
   input     level;
   output     tick;
    
   reg meta_reg;
   
   always @(posedge clk, posedge rst)
      if (rst)
         meta_reg <= 1'b0;
      else
         meta_reg <= level;
   
   assign tick = ~meta_reg & level;
   
endmodule
