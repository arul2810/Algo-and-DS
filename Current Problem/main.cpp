#include <iostream>
#include "string"

using namespace std;

int main() {

    string input_string;

    cin >> input_string;

    long string_length =  input_string.length();

    long *array_string = new long [ string_length] ;

    for ( long i = 0 ; i < string_length ; i++) {

        array_string[i] = int ( input_string [i] );


    }

    for ( int i = 0 ; i < string_length ; i++) {
        cout << char(array_string[i]) << "\n";
            }


    return 0;
}
