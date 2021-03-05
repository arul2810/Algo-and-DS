//
// HackerRank New Year Chaos Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//

#include "iostream"
#include "vector"
using namespace std;



int main(){
    int cases;
    cin >> cases;
    int length;
    for (int i =0; i < cases; i++){
        int no_inputs;
        cin >> no_inputs;
        length = no_inputs;
        int *array = new int[no_inputs];
        for(int j = 0; j < no_inputs ; j++){

            cin >> array[j];

        }
        char chaotic = 'n';
        int bribes=0;
        for (int i = 0; i < length; i++) {
            int temp = (array[i] - (i+1));
            if ( temp > 2) {
                chaotic = 't';
            }
            for (int j = 0; j < i; j++) {
                if (array[j] > array[i]) {
                    bribes++;
                }
            }
        }
        if(chaotic == 't'){
            cout << "Too chaotic";
        } else {
            cout <<bribes;
        }


    }
}