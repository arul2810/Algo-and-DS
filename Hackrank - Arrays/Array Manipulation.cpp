//
// HackerRank Array Manipulation Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program not Verified to Work on HackerRank
// Program working for some test cases on HackerRank - Needs Optimisation

#include "iostream"
#include "fstream"
using namespace std;

int main()
{
    ifstream inFile("D:\\Downloads\input06");
  
    int array_size;
    inFile >> array_size;

    int *array = new int[array_size+1];
    int queries;
    inFile >> queries;

    int max = 0;

    for(int i = 1 ;i<=array_size;i++){
        array[i]=0;
    }

    for (int j = 0; j < queries ; ++j) {

        int query_array[3];
        for(int k=0; k<3;k++){
            inFile >> query_array[k];
        }

        for(int l=query_array[0];l<=query_array[1];l++){
            array[l] = array[l] + query_array[2];
            if(array[l]>max){
                max = array[l];
            }
        }


    }

    cout << max;


}