#include <iostream>
#include <string.h>

using namespace std;


int main(){



    //string input_string;

    cout << "What do you want to do ? \n "<< "1.  Encrpyt \n  2. Decrpyt \n";

    int select;

    cin >> select ;

    cout << "Enter Key: \n";

    char privatekey[100] = {0} ;

    cin >> privatekey ;

    cout << "Enter Text: \n";

    string input;

    cin >> input;

    if (select == 1){


    for ( int i = 0 ; i < input.length() ; i++){

        if ( privatekey[i] != 0){
            for ( int j = 0 ; j < (int (privatekey[i])-48) ; j++){
                cout << input[i] ;
            }
        }else{
            cout << input[i];
        }


    }

    } else{

        int j = 0;
        for ( int i = 0 ; i <  input.length () ; j++){

            if(privatekey[j] != 0 ){
                cout << input[i];
               // cout << int(privatekey[i]-48);
                i = i + (int(privatekey[j])-48);
            }else{
                cout << input[i];
                i = i + 1;
            }

        }
    }




    return 0 ;
}