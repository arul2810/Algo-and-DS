//
// HackerRank Jumping on Clouds Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//
#include "iostream"
using namespace std;
int main()
{

    int array_len;
    cin >> array_len;
    int *inputs = new int[array_len];
    for(int i = 0 ; i < array_len ; ++i){

        cin >> inputs[i];

    }
    int i = 0;
    int jumps = 0;
    while(i < array_len){


        if(inputs[i+2] == 0 && (i+2) < array_len){
            jumps = jumps + 1;

            i = i + 2;
        }else if(inputs[i+1] == 0 && (i+1) < array_len){

            jumps = jumps + 1;

            i = i + 1;
        }else{
            break;
        }

    }

    cout << jumps ;

}