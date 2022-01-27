/*

Program Code by Arul Prakash Samathuvamani | hello@arulprakash.dev

Program to count number of digits in a decimal number

*/

// including library files

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int decimal_number;

    cout << "Enter the decimal number:";

    cin >> decimal_number;

    cout << "\n";

    cout << floor(log10(decimal_number)+1);

    


    return 0;
}