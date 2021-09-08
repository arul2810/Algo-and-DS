/*
Program by Arul Prakash Samathuvamani | arulprakash.dev |

Description: Hash Tables : Ransom Note - https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=arcesium

*/

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;


int main(){

    long input_string1 , input_string2;

    cin >> input_string1 >> input_string2 ;

    string string1, string2;

    cin >> string1 >> string2;

    string string1_seperated[input_string1] , string2_seperated[ input_string2 ];

    long string1_length = string1.length();
    long string2_length = string2.length();

    // Seperating the strings

    long temp = 0;

    for ( int i = 0 ; i < string1_length ; i ++){

        if (string1[i] == ' '){
            string1_seperated[temp] = strcpy 
        }


    }


    return 0;
}