/*
Median of Two Sorted Arrays
------------------------------------------------------------------------------

By: Arul Prakash Samathuvamani | hire@arulprakash.dev
For : Leet Code - Amazon Interview Questions

Date : 28th January 2022

Module Description:

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


*/

// Including all the library files

#include <iostream>

using namespace std;

int main(){

    // Getting the size of the arrays

    int size_array1;
    int size_array2;

    cin >> size_array1 >> size_array2;

    // Declaring the arrays

    int *array1 = new int [size_array1];

    int *array2 = new int [size_array2];

    // Getting the arrays

    for ( int i = 0 ; i < size_array1 ; i++ ){
        cin >> array1[i];
    }

    for ( int i = 0 ; i < size_array2 ; i ++ ){
        cin >> array2[i];
    }

    cout << "\n";

    // Finding the median

    int odd_or_even = 0 ; // Set to 0 if odd or 1 if even

    if ( (size_array2+size_array1) % 2) {
        odd_or_even = 1 ; // set to even
    }// else it is already set to odd

    if ( odd_or_even ){

        int median = ( size_array1 + size_array2 )/2;

        int i = 0 ;
        int j = 0;

        while ( (i+j) != median ){

            if ( array1[i] > array2[j] ){
                j = j + 1;

            }else{
                i = i + 1;
            }

        }

        if ( array1[i] > array2[j] ){
            cout << array2[j];
        }else{
            cout << array1[i];
        }

    }else{

        int median = ( size_array1 + size_array2 )/2;

        int i = 0 ;
        int j = 0;

        while ( (i+j) != median ){

            if ( array1[i] > array2[j] ){
                j = j + 1;

            }else{
                i = i + 1;
            }

        }

        int num=0;

        int temp = 0;

        while ( num != 2 ){

            if ( array1[i] > array2[j] ){
                temp = array2[j];
                j = j + 1;
                num = num+1;

            }else{
                temp = array1[i];
                i = i + 1;
                num = num + 1;
            }
        }

        cout << temp/2;


    }

    return 0;
}