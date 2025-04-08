/*

Code by Arul Prakash Samathuvamani | hire@arulprakash.dev


Leetcode - Problem Two Sums | Difficulty - Easy


*/

//#include <algorithm.h>
#include <iostream>
//#include <vector.h>

using namespace std;


int main(){


	long array_size;
	
	long target;
	
	cin >> array_size;
	
	int hash_table [100000] = {0 } ;
	
	long max = 0;
	
	for ( int i = 0 ; i < array_size ; i++){
		
		long temp;
		
		cin >> temp;
		
		hash_table [ temp ] =1;
		
		if ( max < temp ){
			
			max = temp;
			
		}
		
	}
	
	cin >> target;
	
	for ( int i = 0 ; i <= max ; i++ ){
		
		if (  hash_table[i] == 1 ){
			
			long temp = target - i;
			
			if ( hash_table [ temp] == 1 ){
				
				if ( temp > i ){
					
					cout << i << " " << temp ;
					
					break;
				}
				else{
					
					cout<<temp << " " << i ;
				break;}
			}
		}
		
	}
	



return 0;
}
