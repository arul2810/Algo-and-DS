/*

Code by Arul Prakash Samathuvamani | hello@arulprakash.dev | 8th Feb 2022

Example Code to explain the operation of <map>

Function, given a sentence input, find the occurance of a input word.

*/

// Include all the libraries

#include<iostream>
#include <map>
#include<string>

using namespace std;

//main code

int main(){

    string input_string;

    string find_freq;

    getline(cin, input_string);

    cin >> find_freq;

    map<string, int> string_map; // Common <map> declaration map < datatype, datatype > 

    int string_size = input_string.size();

    string temp_string;

    for( int i = 0 ; i  < string_size ; i++ ){

        if ( input_string[i] != ' ' ){ // Operation to split the string

            temp_string.push_back(input_string[i]);

        }else{

            if ( string_map.find(temp_string) == string_map.end()){ // Find if the given string is present in the map, if yes go to else

                string_map[temp_string] = 1;

            }else{
                string_map[temp_string] ++; // If present, increase the occurance value in the map 
            }

            temp_string.clear();

        }

        if (i==string_size-1){


             if ( string_map.find(temp_string) == string_map.end()){

                string_map[temp_string] = 1;

            }else{
                string_map[temp_string] ++;
     
            }
        }

    }




    cout << string_map[temp_string];



}