/*

Author - Arul Prakash Samathuvamani

Purpose : CodeChef - Problem Code: MULTHREE - https://www.codechef.com/LRNDSA01/problems/MULTHREE

Dependencies : NIL - C++

*/

// Declaration of Headers

#include <iostream>

using namespace std;

/*

Main Program Function

Takes Input -> NIL

Returns 0-> if success

Description: T

*/

int main() {

	// Declaration of inputs

	long test_cases; // number of test cases

	cin >> test_cases;

	for (int i = 0; i < test_cases; i++) { // run the loop of for test cases number of times

		// declaration of variables

		long k;

		long d;

		long d_one;

		cin >> k >> d >> d_one;

		long digit_sum = d + d_one;

		for (long j = 0; j < (k - 2); j++) { // run the loop for k-2 number of times

			long temp;

			temp = (digit_sum % 10);
			digit_sum = digit_sum + temp;

		}

		if (digit_sum % 3 == 0) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}



	}


	// End of function


}