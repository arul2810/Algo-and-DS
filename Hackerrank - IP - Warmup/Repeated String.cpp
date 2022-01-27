//
// HackerRank Repeated Strings Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//
#include "iostream"
#include "string"
#include "cmath"
using namespace std;

int main(){

    string input;
    double int char_length;
    cin >> input;
    cin >> char_length;

    double int string_length = input.size();


    // Find Number of Times

    double int times = (char_length/string_length);
    times = round(times);

    double int char_left = char_length - (string_length * times ) ;


    // Find number of A

    double int number = 0;
    for (double int i = 0 ; i < string_length ; i ++){
        if (input.at(i) == 'a'){
            number = number + 1;
        }
    }

    // Find number of A

    double int count = 0;
    count = number * times ;

    for(double int i = 0 ; i < char_left ; i++){
        if(input.at(i) == 'a'){
            count = count + 1;
        }
    }

    cout << count;


}
