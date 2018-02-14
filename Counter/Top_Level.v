`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// File name: Top_Level.v
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
module Top_Level(clk, rst, uphdnl, step, seg, anode, count_out);
   input clk, rst;
   input uphdnl, step;
   
   //output [15:0] count;
   output [6:0]  seg;
   output [7:0] anode;
   
   output wire [7:0] count_out;
   //wire [7:0] count_out;
   
   wire rst_synch, db_out, tick;
   
   //AISO(clk, rst, rst_synch);
   AISO  aiso (clk, rst, rst_synch);
   
   debounce d0 (clk, rst_synch, step, db_out);

   //PED(clk, rst, level, tick);
   PED     p0  (clk, rst_synch, db_out, tick);

   //counter(clk, rst, ped, uphdnl, count);
   counter a0 (clk, rst_synch, tick, uphdnl, count_out);

   //disp_controller    (clk, reset    , d0            , d1            , d2 ,  d3 ,  d4 ,  d5 ,  d6 ,  d7 , anode, seg);
   disp_controller disp (clk, rst_synch, count_out[3:0], count_out[7:4], 4'b0, 4'b0, 4'b0, 4'b0, 4'b0, 4'b0, anode, seg);

endmodule
