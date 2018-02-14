`timescale 1ns / 1ps
 /******************************************************************************
 * Purpose  : Takes in the frequency of a board at 100Mhz and divides it by a 
 *            32-bit decimal value to output a 480hz frequency. The period is 
 *            now 2.083 milli seconds.       
 *			
 * Notes    : This revision includes this appropriate comment header as 
 *		        instructed in 301 Syllabus Pg.3 and includes commenting for user 
 *            readability. Edited the purpose of the module.
 ******************************************************************************/
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
