/*

Leet Code Algo Training - Code by Arul Prakash Samathuvamani

Code - Binary Search | hire@arulprakash.dev

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int binary_search ( long *input_array , long start, long end, long target ){

  long mid = ( start + end )/2;

  if ( target == input_array [mid] ){

      cout << mid+1;

  }else if ( target < input_array[mid] ){

      binary_search ( input_array , start, mid-1 , target );

  }else{
      binary_search ( input_array, mid+1, start, target );
  }

}

int main(){

    long array_size;

    cin >> array_size;

    long *input_array = new long [array_size];


    for ( int i = 0 ; i < array_size ; i++){

        cin >> input_array[i];

    }


    sort ( input_array, input_array+array_size );

    int flag = 0 ;

    long target;

    cin >> target;

    binary_search ( input_array, 0 , array_size-1 , target );


    return 0;
}