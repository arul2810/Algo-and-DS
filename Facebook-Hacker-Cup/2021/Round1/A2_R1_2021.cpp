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

long printAllSubstrings(string input_string, long n, long k)
{
    /*
     * Fix start index in outer loop.
     * Reveal new character in inner loop till end of string.
     * Print till-now-formed string.
     */

    long max = 0;

    string out;

    for (long i = 0; i < n; i++)
    {
        char temp[n - i + 1];

        //cout << "I is :" << i << "\n";
        
        long tempindex = 0;
        for (long j = i; j < n; j++)
        {
            temp[tempindex++] = input_string[j];

            temp[tempindex] = '\0';
            //printf("%s\n", temp);
        }

        if ( temp[0] - temp[n-i+1] == k){
            if ( max < n-i+1){
               out = temp; 
            }
        }
    }

    cout << out ;

}

int main(){ 


    string input_string;
    cin >> input_string;
    long length = input_string.length();
    long k;

    cin >> k;

    printAllSubstrings(input_string,length,k);

    return 0;
}