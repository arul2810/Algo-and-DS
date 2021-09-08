#include <iostream>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){


    long char_len1, char_len2;

    cin >> char_len1 >> char_len2;

    map < string, int > string1;
    map < string, int > string2;

    for ( int i = 0 ; i < char_len1 ; i++ ){
        string temp;

        cin >> temp;

        string1[temp]++;
    }

    for ( int i = 0 ; i < char_len2; i++){

        string temp;
        
        cin >> temp;

        string2[temp]++;
    }

    int flag = 1;

    string temp = "hello";
    map < string , int > :: iterator itr;

    for ( itr = string2.begin(); itr != string2.end(); itr++){


        if ( string1 [ itr ->first] < itr -> second){
            flag = 0 ;
            break;
        }
    }

    if(flag){
        cout << "Yes";

    }else{
        cout << "No";
    }

    return 0;
}