#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string input_string;

    cin >> input_string;

    int length = input_string.length();

    int count = 1;
   
    for(int i=0 ; i < length ; i++){

        if (input_string[i] == input_string[i+1] ){
                count = count + 1;
        }else{
            cout << count << input_string[i];
            count = 1;  
        }


    }


    return 0;
}