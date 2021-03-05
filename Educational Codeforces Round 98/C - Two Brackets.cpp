//
// Created by arul2 on 11/19/2020.
//
#include <iostream>
#include "string"

using namespace std;

int main() {

    int testcases;
    cin >> testcases;
    //Actual Code
    for(int test=0;test<testcases;test++){

        string input;
        cin >> input;

        int length;
        length = input.length();
        int round_bracket = 0;
        int square_bracket = 0;
        int perfect_round = 0;
        int perfect_square = 0;
        for(int i = 0 ;i < length ; i++){

            if(input[i] == '('){
                round_bracket = round_bracket + 1;
            }else if(input[i] == '['){
                square_bracket = square_bracket + 1;
            }else if(input[i] == ')' && round_bracket > 0){
                perfect_round = perfect_round + 1;
                round_bracket = round_bracket -1;
            }else if(input[i] == ']' && square_bracket >0){
                perfect_square = perfect_square + 1;
                square_bracket = square_bracket - 1;
            }


        }

        cout << perfect_square+perfect_round << endl;


    }


    return 0;
}

