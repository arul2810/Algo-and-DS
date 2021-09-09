#include <iostream>
#include <string>

using namespace std;

int main(){

    int test_cases;

    cin >> test_cases;

    for(int i= 0 ; i < test_cases ; i++){
        string s1;
        string s2;

        cin >> s1 >> s2;

        string letters = {"abcdefghijklmnopqrstuvwxyz"};

        int flag = 1;

        for ( int j=0; j < letters.length() ; j++){

            if( s1.find(letters[j])!= string::npos && s2.find (letters[j]) != string::npos ){
                cout << "YES \n";
                flag = 0;
                break;
            }
        }

        if (flag){
            cout << "NO \n";
        }
    }
}