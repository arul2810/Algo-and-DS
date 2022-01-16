/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev

Leetcode Problem - Two Sums | Diffuculty - Easy

*/

#include <iostream>

using namespace std;

int main(){

    long array_size;

    long target;

    long hash_table [ 100000 ];

    cin >> array_size;

    long max = 0;

    for ( long i = 0 ; i < array_size ; i++ ){

        long temp;

        cin >> temp;

        hash_table [ temp ] = 1;

        if ( max < temp ){
            max = temp;
        }
    }

    cin >> target;

    for ( long i = 0 ; i <= max ; i++) {

        long temp;

        if ( hash_table[i] == 1){
            temp = target - i;

            if ( hash_table [temp] == 1){

                if ( temp > i ){
                    cout << i << " " << temp;
                    break;
                }else{
                    cout << temp << " " << i;
                    break;
                }
            }
        }
    }


    return 0;
}