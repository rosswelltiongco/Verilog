`timescale 1ns / 1ps
//****************************************************************//
// File name: AISO.v
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
module AISO(clk, rst, rst_synch);
   input   clk, rst;
   output rst_synch;

   wire qMeta, qGood;
   
 //dflop(clk, rst, d, q)
   dflop u1 (clk, rst,  1'b1, qMeta);
   dflop u2 (clk, rst, qMeta, qGood);
   assign rst_synch = ~qGood;
   
endmodule 