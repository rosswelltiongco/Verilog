`timescale 1ns / 1ps
//****************************************************************//
// File name: debounce.v
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
module debounce(clk, rst, sw, p_o);
    input        clk, rst, sw;
    output       p_o;

    reg    [2:0] p_s, n_s;
    reg          p_o, n_o;


   //=============Generating Tick====================
    //count
    wire m_tick;
    reg [19:0] count;
    // if hit 999999, reset 0
    assign m_tick = (count == 999999) ? 1'b1: 1'b0;
    
      always @ (posedge clk, posedge rst)
         if (rst)
            count <= 20'b0;
            else if (m_tick)
               count <= 20'b0;
               else 
                  count <= count + 20'b1;
   // ================================================	

    always @ (posedge clk, posedge rst)     
        if(rst)
            begin
                p_s  <= 3'b000;
                p_o <= 1'b0;
            end

        else 
            begin 
                p_s  <= n_s;
                p_o <= n_o;
            end

    always @ (*)
        begin 
            case (p_s)
            3'b000:  {n_s, n_o} = (sw) ? {3'b001, 1'b0} : {3'b000, 1'b0};
            3'b001:  {n_s, n_o} = (sw) ? (m_tick) ? {3'b010, 1'b0} : {3'b001, 1'b0} : {3'b000, 1'b0};
            3'b010:  {n_s, n_o} = (sw) ? (m_tick) ? {3'b011, 1'b0} : {3'b010, 1'b0} : {3'b000, 1'b0};
            3'b011:  {n_s, n_o} = (sw) ? (m_tick) ? {3'b100, 1'b1} : {3'b011, 1'b0} : {3'b000, 1'b0};
            3'b100:  {n_s, n_o} = (sw) ? {3'b100, 1'b1} : {3'b101, 1'b1};
            3'b101:  {n_s, n_o} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b110, 1'b1} : {3'b101, 1'b1};
            3'b110:  {n_s, n_o} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b111, 1'b1} : {3'b110, 1'b1};
            3'b111:  {n_s, n_o} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b000, 1'b0} : {3'b111, 1'b1};
            default: {n_s, n_o} = {3'b000, 1'b0};
            endcase
        end        
endmodule 