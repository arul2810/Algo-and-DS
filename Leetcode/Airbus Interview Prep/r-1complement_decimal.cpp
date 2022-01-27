/*

Program Code by Arul Prakash Samathuvamani ( APS ) | hello@arulprakash.dev

Code to find 9's complement of a decimal number


*/


// including library files

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){


    int decimal_number;

    int _9_complement;

    cout << "Enter the decimal number: ";
    cin >> decimal_number;

    cout << "\n";

    int number_of_digits;

    number_of_digits = floor(log10(decimal_number)+1);

    cout << ( ( pow (10, number_of_digits ) - 1 ) - decimal_number  );
    

    return 0;
}