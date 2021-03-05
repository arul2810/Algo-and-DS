//
// HackerRank Minimum Swaps 2 Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program  Verified to Work on HackerRank
//

#include "iostream"
using namespace std;

int main(){

    int length;
    cin >> length;
    int *array = new int[length];
    for(int i = 1 ; i <= length ; i++){
        cin >> array[i];
    }
    int i = 1;
    int count = 0;
    int temp;
    while(i<=length){
        if(array[i] != i){
            count = count + 1;
            temp =  array[i];
            array[i] = array[temp];
            array[temp] = temp;
            while (array[i] != i){
                count = count+1;
                temp =  array[i];
                array[i] = array[temp];
                array[temp] = temp;
            }
        }else{
            i = i + 1;
        }
    }
    cout << count;


}