//
// Created by Arul Prakash Samathuvamani on 11/11/2020.
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

        int input_length;

        input_length = input.length();

        if(input_length > 10){
            cout<<input[0]<<input_length-2<<input[input_length-1]<<endl;
        }else{
            cout << input <<endl;
        }




    }


    return 0;
}
