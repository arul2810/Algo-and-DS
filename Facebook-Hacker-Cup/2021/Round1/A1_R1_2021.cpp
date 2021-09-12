/*

Program by Arul Prakash Samathuvamani | arulprakash.dev |

Description: Problem Statement A1 - Facebook Hackercup 2021

*/

// Declaration of Library Functions

#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    ofstream file_print;

    file_print.open("output_A1_Protect.txt");

    ifstream inFile;

    string temp;
    
    inFile.open("A1_Input_Protect.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }


    long testcases;

    getline( inFile, temp) ;

    stringstream geek(temp);

    geek >> testcases;

    //testcases = int(temp);

    for( long testcase_loop = 0 ; testcase_loop < testcases ; testcase_loop++){


        long char_length;

        getline ( inFile, temp );

        stringstream geek ( temp );

        geek >> char_length;

        //cin >> char_length;

        long min_count = 0;

        int flag = 1;

        int hand = 0;

        // 0 for O, 1 for X

        string input_string;

        getline (inFile, input_string);


        for ( long char_loop = 0 ; char_loop < char_length ; char_loop++){



            if ( flag && ( input_string[char_loop] == 'X' || input_string[char_loop] == 'O')){
                flag = 0;

                if ( input_string[char_loop] == 'O' ){
                    hand = 0;
                }else{
                    hand = 1;
                }
            }

            if ( flag == 0){
                if ( input_string[char_loop] == 'X' && hand == 0 ){
                    min_count = min_count + 1;
                    hand = 1;
                }else if ( input_string[char_loop]  == 'O' && hand == 1){
                    min_count = min_count + 1;
                    hand =0;
                }
            }


        }


        cout << "Case #"<<testcase_loop+1<<": "<<min_count << "\n";

        file_print << "Case #"<<testcase_loop+1<<": "<<min_count << "\n";



    }

    file_print.close();

    inFile.close();

    return 0;
}