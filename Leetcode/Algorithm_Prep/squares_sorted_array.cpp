/*

Find Squares of Sorted Array
------------------------------------------------------------------------------

By: Arul Prakash Samathuvamani | hire@arulprakash.dev
For : Leet Code Algorithm Prep

Date : 27th January 2022

Module Description:

Given an integer array in ascending order, return array with the squares of each number in ascending order.

*/

// Including all the library files

#include <iostream>

using namespace std;

int main(){

    // Input Array

    int size_of_array;

    cin >> size_of_array;

    int *input_array = new int [size_of_array];

    int first_positive = 0;


    for ( int i = 0 ; i < size_of_array ; i ++ ){

        cin >> input_array [i];

        if ( input_array[i] >= 0 ){
            first_positive = i;
        }

    }

    // Printing out the array with squares of positive number in ascending order

    int negative_index = 0;

    int positive_index = first_positive;

    if ( negative_index != 0 || first_positive < size_of_array ){

        if ( ( input_array [ negative_index ] * input_array [negative_index] ) < ( input_array [first_positive ] * input_array [first_positive] ) ){
            cout << " " << input_array [ negative_index ] * input_array [negative_index];
            negative_index =  negative_index - 1;
        }else{
            cout << " " << input_array [first_positive ] * input_array [first_positive] ;
            first_positive = first_positive + 1;
        }

    }




    return 0;
}