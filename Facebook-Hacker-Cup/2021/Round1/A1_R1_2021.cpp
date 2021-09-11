/*

Program by Arul Prakash Samathuvamani | arulprakash.dev |

Description: Problem Statement A1 - Facebook Hackercup 2021

*/

// Declaration of Library Functions

#include <iostream>
#include <string.h>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ofstream file_print;

    file_print.open("output_A1.txt");

    long testcases;

    cin >> testcases;


    for( long testcase_loop = 0 ; testcase_loop < testcases ; testcase_loop++){


        long char_length;

        cin >> char_length;

        long min_count = 0;

        int flag = 1;

        int hand = 0;

        // 0 for O, 1 for X

        for ( long char_loop = 0 ; char_loop < char_length ; char_loop++){


            char temp;

            cin >> temp;

            if ( flag && ( temp == 'X' || temp == 'O')){
                flag = 0;

                if ( temp == 'O' ){
                    hand = 0;
                }else{
                    hand = 1;
                }
            }

            if ( flag == 0){
                if ( temp == 'X' && hand == 0 ){
                    min_count = min_count + 1;
                    hand = 1;
                }else if ( temp  == 'O' && hand == 1){
                    min_count = min_count + 1;
                    hand =0;
                }
            }


        }


        cout << "Case #"<<testcase_loop+1<<": "<<min_count << "\n";

        file_print << "Case #"<<testcase_loop+1<<": "<<min_count << "\n";



    }

    file_print.close();

    return 0;
}