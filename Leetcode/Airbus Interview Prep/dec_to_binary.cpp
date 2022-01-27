/*

Code by Arul Prakash Samathuvamani | hello@arulprakash.dev

Program to convert Decimal to Binary Number

*/

// Including Library Files

#include <iostream>

using namespace std;

int main (){

    int decimal_number;

    cout << " Enter the Decimal Number: " ;
    cin >> decimal_number;

    cout << "\n";

    int i = 0;

    int *binary_array = new int [32];

    while ( decimal_number > 0 ){

        int temp;

        temp = decimal_number % 2;

        binary_array[i] =  temp;

        //cout << binary_array[i];

        i = i + 1;

        decimal_number = decimal_number/2;
    }

    for ( int j = i; j >= 0 ; j-- ){

        //cout << j;

        cout << binary_array[j];
    }

    return 0;
}