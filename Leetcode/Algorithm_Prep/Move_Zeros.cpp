/*

Move Zeros
------------------------------------------------------------------------------

By: Arul Prakash Samathuvamani | hire@arulprakash.dev
For : Leet Code Algorithm Prep

Date : 27th January 2022

Module Description:

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.


*/

// Including all the library files

#include <iostream>

using namespace std;

int main(){

    int size_of_array;

    cin >> size_of_array;

    int *input_array =  new int [size_of_array];

    for ( int i = 0 ; i < size_of_array ; i ++ ){
        cin >> input_array [i];
    }

    // Start of Program

    int num_zeros = 0 ;

    for ( int i = 0 ; i < size_of_array ; i ++ ){

        if (input_array[i] != 0){

            cout << input_array[i] << " ";
        }else{
            num_zeros = num_zeros + 1;
        }
    }

    for ( int i = 0 ; i < num_zeros ; i++){
        cout << "0" << " " ;
    }

    return 0;
}