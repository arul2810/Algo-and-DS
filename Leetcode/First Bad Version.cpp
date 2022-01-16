/* 

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

First Bad Version | Leet Code | Easy

*/


#include <iostream>

using namespace std;

int bad_version;

bool is_bad_version ( int n ){

    if ( n >= bad_version ){
        return 1;
    }else{
        return 0;
    }
}

int main (){

    int current_version;

    int total_version;

    cin >> total_version;

    cin >> bad_version;

    while (1){
        cin >> current_version;

        if (is_bad_version ( current_version)){
            cout << "Bad Version " << "\n";

        }else{
            cout << "Not a Bad Version " << " \n";
        }
    }

    return 0;
}