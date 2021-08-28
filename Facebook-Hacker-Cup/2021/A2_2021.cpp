/*

Program by Arul Prakash Samathuvamani | arulprakash.dev |

Description: Problem Statement A2 - Facebook Hackercup 2021

*/

// Declaration of Library Functions

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

 extern long number_of_replacements = 0;


// Function to find the connection link


long find_last_connection ( char input_char ){







}




// Main Function Code

int main(){


    // get the number of test cases

    long test_cases;

    cin >> test_cases;

    // enter loop for test cases

    for ( int test_case_loop = 0 ; test_case_loop < test_cases ; test_case_loop ++){


        // Welcome to problem loop. Its time to get the corresponding inputs;

        string input_string;
        long input_string_length;

        long minimum_change = 0;

        cin >> input_string;

        cout << "Processing Input String - > Getting length and Putting them to length array \n";

        input_string_length = input_string.length();

        cout << "Length of String is : " << input_string_length << "\n";

        long input_repeat_sequence_find[26] = {0};

        for ( int temp_loop = 0 ; temp_loop < input_string_length ; temp_loop++){

            input_repeat_sequence_find[int(input_string[temp_loop])-65] = input_repeat_sequence_find[int(input_string[temp_loop])-65] + 1;

        }

        // Get the number of replacements

        cin >> number_of_replacements; 

        // Declare array of replacement strings

        string replacements[number_of_replacements];

        int possibility_finder[26] = {0};

        for ( int i = 0 ; i < number_of_replacements ; i ++){

            // getting the replacements

            cin >> replacements[i] ;

            possibility_finder[int (replacements[i][1]) -65 ] = possibility_finder[int (replacements[i][1]) -65 ] + 1;

        }

        // Check if the change is possible

        int possibility_flag = 0;
        int sum = 0 ;

        for ( int i = 0 ; i < 26 ; i++){
            if (possibility_finder[i] > 1 ){
                possibility_flag = 1;
            }else if (possibility_finder [i] == 1){
                sum = sum + 1;
            }
       }

        if ( !possibility_flag && sum != 26 && input_string_length > 1 ){
            minimum_change = -1;

            cout << "Looks like the change is not possible \n"; 
        }

        // Okay its time to do the hardwork. Brute forcing and finding the minimum change

        // We need to do recursive programming

        // okay, i havent done tat before, how to do it ? Recursion is hard :(

        int stop_flag = 0;

        
        while ( !stop_flag ){

            


        }
        


    }


return 0;
}