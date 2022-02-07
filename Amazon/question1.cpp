/*

Code by Arul Prakash Samathuvamani - hire@arulprakash.dev

For Amazon Interview Question 1 - 6th Feb 2022


*/


// Including the libraries

#include <iostream>

using namespace std;


// Start of main function

int main(){

    // get the size of array

    long long array_size;

    cin >> array_size;

    // declaring the array

    signed int *input_array = new signed int [array_size];

    // get the array

    long long number_of_minus = 0;

    for ( long long i = 0 ; i < array_size ; i++){

        cin >> input_array[i];

        if ( input_array[i] <0 ){
            number_of_minus = number_of_minus + 1;
        }
    }

    // declaring two pointers at left and right most end of the array

    long long left_pointer = 0;
    long long right_pointer = array_size-1;

    int max_size = 0;

    for(left_pointer = 0 ; left_pointer<array_size-2 ; left_pointer++){
       
        int flag = 1;

        if ( input_array[left_pointer-1] < 0 && left_pointer != 0){
            number_of_minus = number_of_minus-1;
        }

        long long temp_mins = number_of_minus;

        while(flag && right_pointer != left_pointer){

                if(number_of_minus%2 == 0){

                    int size = (right_pointer-left_pointer)+1;
                    if(size > max_size){
                        max_size = size;
                    }
                    flag = 0;

                }
            if(input_array[right_pointer] < 0 ){
                temp_mins = temp_mins-1;
            }
            right_pointer = right_pointer-1;
        }

        right_pointer = array_size -1;
        
    }

    cout << max_size;



}