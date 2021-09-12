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

    for( long testcase_loop = 0 ; testcase_loop < testcases ; testcase_loop++){


        


    }

    return 0;

}