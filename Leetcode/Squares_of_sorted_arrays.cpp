/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

Leetcode Problem - Squares of Sorted Array | Diffuculty - Easy

*/


// Including all the library files
#include<iostream>
#include<algorithm>

using namespace std;

/*

Logic - Iterate through negative part in reverse, interate through postive part
normally, cout the square of smallest number.
*/
int main(){

    int array_size; // get array size

    cin >> array_size;

    signed int *input_array = new signed int [array_size];
    // get the array and index of postitive number

    int flag = 1; // to check if positive number has been entered

    int positive_index = 0; // index of first positive number

    for ( int i = 0 ; i < array_size ; i++ ){

        cin >> input_array[i];

        if ( flag ){
            if ( input_array[i] >= 0) {
                positive_index = i;
                flag = 0;
            }
        }
        
    }

    // if no positive number has been entered

    if (flag){
        for ( int i = 0 ; i < array_size ; i++){
            cout << input_array[i] * input_array[i] << " " ;
        }
    }

    // find negative index

    int negative_index = positive_index - 1;
    for ( int i = 0 ; i <array_size ; ){

        if( input_array[positive_index] > ((-1)*input_array[negative_index])){ // if positive number is greater, print the smaller number

            cout << input_array[negative_index] * input_array[negative_index] << " " ;
            negative_index =  negative_index - 1; // reduce negative index
            i = i + 1;
        }else{

            cout << input_array[positive_index] * input_array[positive_index] << " " ; // else print the positive number
            positive_index = positive_index + 1 ; // increase positive number
            i = i + 1;
        }

    }
    return 0;
}