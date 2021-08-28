/*

Program by Arul Prakash Samathuvamani | arulprakash.dev |

Description: Problem Statement A1 - Facebook Hackercup 2021

*/

// Declaration of Library Functions

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

// Main Function Code

int main(){

    // Getting number of test cases and entering the loop

    // Remainder: Always use long for competitive programming

    // Printing output to file

    ofstream file_print;

    file_print.open("output.txt");

    long testcases;

    cin >> testcases;

    for ( long test_case_loop = 0 ; test_case_loop < testcases ; test_case_loop ++){


        long characters_repeat[26] = {0}; 

        string input_string; // store input string 

        cin >> input_string; // get the input string

        long input_length = input_string.length(); // get input string length

        // Declaration of variables for calculation

        long vovels_length = 0 ; // number of vovels

        long cons_length  = 0 ; // number of consonants ( Avoid spelling mistakes please )

        long max_vovel_length = 0; // max repeat sequence in vovel

        long max_const_length = 0 ; // max repeat sequence in const

        for ( long string_loop = 0 ; string_loop < input_length ; string_loop ++){

            // Loop Description - Seperate the strings and find the characters lenghts


            if ( input_string[string_loop] == 'A' || input_string[string_loop] == 'E' || input_string[string_loop] == 'I' || input_string[string_loop] == 'O' || input_string[string_loop] == 'U' ){

                vovels_length = vovels_length + 1;

                characters_repeat[input_string[string_loop] - 65] = characters_repeat[input_string[string_loop] - 65] + 1;

                //cout << input_string[string_loop] << " " << characters_repeat[input_string[string_loop-65]] << "\n";

                if (characters_repeat[input_string[string_loop] - 65] > max_vovel_length){ // loop to find max repeat in vovel
                    max_vovel_length = characters_repeat[input_string[string_loop] - 65];
                }

            }else{
                
                cons_length = cons_length + 1;
                
                characters_repeat[input_string[string_loop] - 65] = characters_repeat[input_string[string_loop] - 65] + 1;

                if ( characters_repeat[input_string[string_loop] - 65] > max_const_length){ // loop to find max repeat in const
                    max_const_length = characters_repeat[input_string[string_loop] - 65];
                }

            }

        } // For loop for string calc ends here.

        cout << "New Case: \n";

        cout << "Const Length: " << cons_length << "   | Vovel Length: " << vovels_length << " |Max Const Length:" << max_const_length << " | Max Vovel Length : " << max_vovel_length << "\n";

        // Start of main calculations

        // find if vovel if equal to const, then find which one has max repeat chars.

        long minimum_change = 0; // variable to calculate minimum change


        // if length is one, then no need to calculate

        if ( input_length == 1){

            minimum_change = 0; // assign minimum change as zero

        }
        // find if letters are all vovels or all consts.
        else if (cons_length == 0 || vovels_length == 0){

            minimum_change = cons_length + vovels_length;

        }
        // okay find is const is equal to vovel. if yes, find which one has more repeating chars
        else if ( cons_length == vovels_length && max_const_length > max_vovel_length){

            // in this case, we have to change all letters to const. find max of const length and multiply rest by 2.

            cons_length = cons_length - max_const_length;

            minimum_change = cons_length * 2 + minimum_change;

            // now change all the vovels 

            minimum_change = vovels_length + minimum_change;


        }else if ( cons_length == vovels_length && max_vovel_length > max_const_length){

            // in this case, we have to change all letters to vovel.

            vovels_length = vovels_length - max_vovel_length;

            minimum_change = vovels_length * 2 + minimum_change;

            // now change all the const

            minimum_change = cons_length + minimum_change;

        }else {
            // in this case, we have to find if we have to change to vovel or const

            long temp_vov_len = vovels_length - max_vovel_length ;
            long temp_min_change = temp_vov_len *2 ;
            temp_min_change = temp_min_change + cons_length;


            long temp_con_len = cons_length - max_const_length;
            long temp_2 = temp_con_len * 2 ;
            temp_2 = temp_2 + vovels_length;

            if ( temp_2 > temp_min_change){
                minimum_change = temp_min_change;
            }else{
                minimum_change = temp_2;
            }
           
        }






        file_print << "Case #"<<test_case_loop+1<<": "<< minimum_change << "\n";
        

    }// Test Case Loop ends here

    //close print file

    file_print.close();

    return 0;
}