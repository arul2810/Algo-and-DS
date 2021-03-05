//
// HackerRank Array - Left Rotation Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//

#include "iostream"
using namespace std;




int main(){
    int rotations;
    int n;
    cin >> n;
    cin >> rotations;
    int *array = new int[n];

    for (int i = 0; i < n ; i ++){
        cin >> array[i];
    }

    int *new_array = new int[n];
    for (int i=0;i<n;i++){
        new_array[i] = array[i];
    }



    for (int i = 0; i < rotations ; i ++) {

        int last = new_array[0];

        for (int j = 0 ; j < n-1 ; j++) {
            new_array[j] = new_array[j + 1];

        }
        new_array[n-1] = last;


    }

    for (int i = 0; i < n ; i ++){
        cout << new_array[i]<< " ";
    }
}