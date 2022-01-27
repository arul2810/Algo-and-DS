/*

Author - Arul Prakash Samathuvamani

Purpose : CodeChef - Problem Code: TEST - https://www.codechef.com/LRNDSA01/problems/TEST

Dependencies : NIL - C++ 

*/

// Declaration of Headers

#include "iostream.h"

using namespace std;

/*

Main Program Function

Takes Input -> NIL

Returns 0-> if success

Description: Takes input and prints them back untill number 42 is 
entered


*/

int main(){

	// Declaration of inputs

	int input_numbers; // input numbers

	while (1) { // run infininte

		cin >> input_numbers;

		if (input_numbers == 42) { // Checks if 42 is entered if yes break loop
			break;
		}
		else {
			cout << input_numbers << "\n";
		}


	}

	// End of function


}