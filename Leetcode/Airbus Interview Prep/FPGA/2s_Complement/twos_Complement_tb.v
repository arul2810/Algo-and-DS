
/* Two's Complement - Test Bench
* ---------------------
* By: Arul Prakash Samathuvamani | hello@arulprakash.dev
* For: Interview Revision
* 
*
* Date : 27th Jan 2022
*
* Module Description:
* ------------------
* Test Bench file for Two's Complement Module
* 
*/


 `timescale 1ns/100ps
 
 // Initialising Test Bench Module
 
 module twos_Complement_tb;
 
 // Test Bench Generated Signals
 
reg clock;

reg [3:0]input_value;

// Device Under Test (DUT) generated Output signals

wire [3:0]complement;

// Intialisation of DUT

twos_Complement twos_Complement_tb (

	.clock ( clock ),
	.input_value ( input_value ),
	.complement ( complement )
	
);

// Logic for test bench

initial begin

		$display(" Simulation Started " ); // Simulation started message 
		
		clock = 1'b0;
		input_value = 3'b001;
		
		#10;
		
		clock = 1'b1;
		
		#10;
		
		clock = 1'b0;
		
		#10;
		
		clock = 1'b1;
		
		#10;
		
		clock = 1'b0;
		
		#10;
				#10;
		
		clock = 1'b1;
		
		#10;
		
		clock = 1'b0;
		
		#10;		#10;
		
		clock = 1'b1;
		
		#10;
		
		clock = 1'b0;
		
		#10;
end

endmodule