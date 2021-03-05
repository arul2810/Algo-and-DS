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
    long long int char_length;
    cin >> input;
    cin >> char_length;

    long long int string_length = input.size();


    // Find Number of Times

    long long int times = (char_length/string_length);
    times = round(times);

    long long int char_left = char_length - (string_length * times ) ;


    // Find number of A

    long long int number = 0;
    for (long long int i = 0 ; i < string_length ; i ++){
        if (input.at(i) == 'a'){
            number = number + 1;
        }
    }

    // Find number of A

    long long int count = 0;
    count = number * times ;

    for(long long int i = 0 ; i < char_left ; i++){
        if(input.at(i) == 'a'){
            count = count + 1;
        }
    }

    cout << count;


}
