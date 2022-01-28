/*

 Integer to Roman
------------------------------------------------------------------------------

By: Arul Prakash Samathuvamani | hire@arulprakash.dev
For : Leet Code - Amazon Interview Questions

Date : 28th January 2022

Module Description:

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

*/

// Including all the library files

#include <iostream>

using namespace std;

int main(){


    int input_number;

    cin >> input_number;

    while ( input_number != 0 ){

        if ( input_number >= 1000 ){
            cout << "M";
            input_number = input_number - 1000;
        }else if ( input_number >= 900 ){
            cout << "CM";
            input_number = input_number - 900;
        }else if ( input_number >= 500 ){
            cout << "D";
            input_number = input_number - 500;
        }else if ( input_number >= 400 ){
            cout << "CD";
            input_number = input_number - 400;
        }else if ( input_number >=  100){
            cout << "C";
            input_number = input_number - 100;
        }else if  ( input_number >= 90 ){
            cout << "XC";
            input_number = input_number - 90;
        }else if ( input_number >=50 ){
            cout << "L";
            input_number = input_number - 50;
        }else if ( input_number >= 40){
            cout << "XL";
            input_number = input_number - 40;
        }else if ( input_number >= 10) {
            cout << "X";
            input_number = input_number -10;
        }else if ( input_number >= 9){
            cout <<"XI";
            input_number = input_number - 9;

        }else if ( input_number >= 5) {
            cout << "V";
            input_number = input_number - 5;
        }else if ( input_number >= 4){
            cout << "IV";
            input_number = input_number - 4;
        }else if ( input_number >= 1 ){
            cout << "I";
            input_number = input_number-1;
        }

    }


    return 0;
}