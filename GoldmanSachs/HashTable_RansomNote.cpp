#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){

    long char_len1, char_len2;

    cin  >> char_len1 >> char_len2 ;

    string string1[char_len1];
    string string2[char_len2];

    for ( int i = 0 ; i < char_len1 ; i++){

        cin >> string1[i];

    }

    for ( int i = 0 ; i < char_len2 ; i ++){

        cin >> string2[i];

    }

    long previous_pos = 0;
    long yes_count = 0;

    long yes_array[char_len1] = {0};

    for ( int i = 0 ; i < char_len2 ; i++){
        for( int j = 0 ; j < char_len1 ; j++){

            if ( string1[j] == string2[i] && yes_array[j] == 0 ){
                yes_count = yes_count + 1;
                previous_pos = j ;
                yes_array[j] = 1;
                break;
            }
        }
    }

    if (yes_count == char_len2){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}