
/*

Rotate Array
------------------------------------------------------------------------------

By: Arul Prakash Samathuvamani | hire@arulprakash.dev
For : Leet Code Algorithm Prep

Date : 27th January 2022

Module Description:

Given an array, rotate the array to the right by k steps, where k is non-negative.


*/

// Including all the library files

#include <iostream>

using namespace std;

int main(){


    int size_of_array ;

    cin >> size_of_array ;

    int *input_array = new int [size_of_array];

    for ( int i = 0 ; i < size_of_array ; i = i + 1 ){
        cin >> input_array[i];
    }

    int *rotated_array = new int [size_of_array];

    int rotate_k;

    cin >> rotate_k;

    int rotate_index = size_of_array -rotate_k;

    int rotated_elements = 0;

    int i = 0;

    int start_index = 0;

    cout << rotate_index << " here " << "\n";

    while ( rotated_elements != size_of_array ){

        if (rotate_index < size_of_array){
            cout << input_array[rotate_index] << " ";
            rotated_elements = rotated_elements + 1;
            rotate_index = rotate_index + 1;
           // cout << rotated_elements << "\n";
        }else{
           cout << input_array[start_index]<< " ";
            rotated_elements = rotated_elements + 1;
            start_index = start_index + 1;
           // cout << rotated_elements << "\n";
        }

    }


    return 0;
}