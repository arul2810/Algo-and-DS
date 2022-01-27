/*

Program Code by Arul Prakash Samathuvamani | hello@arulprakash.dev

Program to Convert Float to Binary

*/

#include <iostream>

using namespace std;

int main(){

    float float_number;

    cout << "Enter Floating Point Number: ";

    cin >> float_number;

    cout << "\n";

    while ( float_number != 1){

        float temp;

        float_number = float_number *2 ;

        if ( float_number > 1 ){
            cout << "1";
            float_number = float_number - 1;
        }else if ( float_number == 1){
            cout << "1";
        }else{
            cout << "0";
        }

    }


    return 0 ;
}