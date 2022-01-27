/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

Leetcode Problem - Rotate Array | Diffuculty - Medium

This is simpler version of Rotate Array that was performed using linked list

*/


// Including all the library files
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int array_size;

    cin >> array_size;

    int *input_array = new int [array_size];

    for ( int i = 0 ; i < array_size ; i ++ ){
        cin >> input_array[i] ;
    }

    int rotate_array;

    cin >> rotate_array;
    
    for ( int i = 0 ; i < rotate_array ; i++){

        cout << input_array[array_size-i-1] << " " ;

    }

    for ( int i = 0 ; i < array_size - rotate_array ; i ++ ){
        cout << input_array[i] << " " ;
        
    }
    }

