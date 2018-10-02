`timescale 1ns / 1ps
//****************************************************************//
// File name: load_reg_16.v
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
module load_reg_16(clk, rst, load, d, q);
    input             clk, rst, load;
    input      [15:0]              d;
    output reg [15:0]              q;

    always @ (posedge clk, posedge rst)
        if   (rst)     q <= 16'b0;
        else if (load) q <=     d;
        else           q <=     q;

endmodule
