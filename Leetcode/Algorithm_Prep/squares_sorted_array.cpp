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

    signed int size_of_array;

    cin >> size_of_array;

    signed int *input_array = new signed int [size_of_array];

    int first_positive = 0;

    int flag = 1;


    for ( int i = 0 ; i < size_of_array ; i ++ ){

        cin >> input_array [i];

        if ( input_array[i] >= 0 && flag == 1){
            first_positive = i;
            flag = 0;
        }

    }

    // Printing out the array with squares of positive number in ascending order

    cout << first_positive << "\n";

    signed int negative_index = first_positive-1;

    int positive_index = first_positive;

    int value_printed = 0;

    while ( value_printed != size_of_array ){

        if ( ( input_array [ negative_index ] * input_array [negative_index] ) < ( input_array [first_positive ] * input_array [first_positive] ) && value_printed < (size_of_array-1)){
            cout << " " << input_array [ negative_index ] * input_array [negative_index];
            negative_index =  negative_index - 1;
            value_printed = value_printed + 1;
        }else if (value_printed < (size_of_array - 1 ) ){
            cout << " " << input_array [first_positive ] * input_array [first_positive] ;
            first_positive = first_positive + 1;
            value_printed = value_printed + 1;
        }else{
            if (negative_index < 0 ){
                cout << " " << input_array [first_positive ] * input_array [first_positive] ;
                value_printed = value_printed + 1;
                //cout << value_printed << "\n";
            }else{
                cout << " " << input_array [ negative_index ] * input_array [negative_index];
                value_printed = value_printed + 1;
            }
        }

    }




    return 0;
}