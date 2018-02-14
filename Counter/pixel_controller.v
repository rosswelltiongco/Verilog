`timescale 1ns / 1ps
 /******************************************************************************
 *
 * Purpose  : Generates which anode to turn on and off along with selecting 
 *            which address and data to display on that anode. 
 *             
 * Notes    : Created a moore machine and used Boiler-Plate #2 template. Took 
 *            of select in the default. Took of an extra zero when an anode was 
 *            turned on.
 ******************************************************************************/
module pixel_controller( clk, reset, a, sel );

	/*
	clk_in is the boards clock input at 100 Mhz
	reset sets the state back to 0
	a is an 8 bit output that determines which anode is off and on
	sel is a 3 bit output that determines what data to display on the anode
	*/
	input            clk, reset;
	output reg [7:0] a;
	output reg [2:0] sel;
	
	/*
	State register and next_state variables
	*/
	reg [3:0] present_state, next_state;

   /*
	At a certain present state, we go to the next state.
	*/
	always@(  present_state )
		case( present_state ) 
			3'b000   : next_state = 3'b001;
			3'b001   : next_state = 3'b010;			
			3'b010   : next_state = 3'b011;
			3'b011   : next_state = 3'b100;
			3'b100   : next_state = 3'b101;
			3'b101   : next_state = 3'b110;
			3'b110   : next_state = 3'b111;
			3'b111   : next_state = 3'b000;
			default  : next_state = present_state;
		endcase
		
	/*
	State Register Logic (Sequential Logic)
   */	
	always@( posedge clk or posedge reset )
		if( reset == 1'b1 )
			present_state = 3'b000; //Sets the state back to 0
		else
			present_state = next_state; //Update state register with next state
			
	/*
	On each state, we determine which anode we want off and on along with 
	determining which data we select to display on the anode
	*/
	always@ (  present_state  )
		case( present_state )
			3'b000   : {a, sel} = 11'b1111_1110_000;
			3'b001   : {a, sel} = 11'b1111_1101_001;
			3'b010   : {a, sel} = 11'b1111_1011_010;
			3'b011   : {a, sel} = 11'b1111_0111_011;
			3'b100   : {a, sel} = 11'b1110_1111_100;
			3'b101   : {a, sel} = 11'b1101_1111_101;
			3'b110   : {a, sel} = 11'b1011_1111_110;
			3'b111   : {a, sel} = 11'b0111_1111_111;
		   default  : a = 8'b1111_1111; //Turn all anodes off with no select
		endcase
		
endmodule
