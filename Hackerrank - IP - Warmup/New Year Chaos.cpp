/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

Hackerrank Problem - Arrays | New Year Chaos | Diffuculty - Medium

*/


// Including all the library files
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    // Solution Begins

    int test_cases; // get the number of testcases

    cin >> test_cases;

    for ( int i = 0 ; i < test_cases ; i++ ){

        int array_size; // Get the size of the test cases

        cin >> array_size;

        // create an array for test case size

        int *input_array = new int [array_size];

        int bribes = 0 ; // Initialise the number of bribes.

        int previous = 0 ; // temp variable to store previous value

        cin >> previous;
        
        int flag  = 1;

        for ( int j = 1 ; j < array_size ; j++ ){
            // Get the test case size;

            int temp;

            cin >> temp;
            
            int diff;

            if ( temp < previous ){

                diff = previous - temp;

                if ( diff > 2){
                    cout << "Too chaotic\n";
                    flag = 0 ;
                    break;
                }else{
                    bribes = diff + bribes ;
                    previous = temp;
                }

            }else{
                previous = temp;
            }
        }

        if ( flag ){
            cout << bribes<<"\n";
        }

    }
}