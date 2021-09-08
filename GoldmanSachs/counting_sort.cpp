#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){


    long string_len = 0;

    cin >> string_len ;

    char input_string[string_len];

    for( int loop_var = 0 ; loop_var < string_len ; loop_var ++){

        cin >> input_string[loop_var];

    }

    sort( input_string , input_string + string_len);


    for ( int loop_var = 0 ; loop_var < string_len ; loop_var ++){

        //cout << "I am here";
        cout << input_string [loop_var];

    }

    return 0;
}