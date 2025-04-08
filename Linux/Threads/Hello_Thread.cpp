/*

Code by Arul Prakash Samathuvamani | hello@arulprakash.dev

Description:

This Code gives a basic introduction to concept of threads in Linux.

*/

// Adding libraries

#include <iostream>
#include <stdlib.h>
#include <pthread.h>

using namespace std;


// Function Name: prnt_thread
// Function Description: Print the integer that has been passed into the 
// function

void *prnt_thread ( void *input_void) {

	int *input_integer = ( int* ) input_void;
	cout<< "Printing from Thread: "<< input_integer <<"\n";


}

// Main Function - Run two seperate printf on two seperate threads.

int main(){

	// Creating new threads

	pthread_t thread1, thread2;
	int *a ;
	int *b ;

	&a = 1;
	&b = 2;
	pthread_create ( &thread1 , NULL, prnt_thread ,(void *) a);
	pthread_create ( &thread2, NULL, prnt_thread , (void *) b);


return 0;
}

