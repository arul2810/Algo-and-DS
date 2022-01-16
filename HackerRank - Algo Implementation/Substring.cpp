#include <iostream>
#include <string.h>

using namespace std;

void substring ( string input_string, long string_lenght){


    for ( int i = 0 ; i < string_lenght ; i ++ ){

        for ( int j = 1 ; j <= string_lenght-i ; j ++ ){

            cout << input_string.substr ( i, j ) << endl ;
        }
    }

}


int main(){

    string input_string;

    cin >> input_string;

    long string_length;

    string_length =  input_string.length();

    substring( input_string , string_length);


    return 0;
}