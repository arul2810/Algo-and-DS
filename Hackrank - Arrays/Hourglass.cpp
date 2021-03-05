//
// HackerRank Hourglass Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//

#include "iostream"
using namespace std;

int hourglass(int array[6][6]){

    signed int value;
    int previous ;
    for (int i = 0; i < 4 ; i ++){
        for (int j = 0; j < 4 ; j ++){
            value = ( array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] + array[i+2][j] + array[i+2][j+1] + array[i+2][j+2] );
            if(i == 0 && j == 0){
                previous = value;
            }else if (value > previous){
                previous = value;
            }
        }
    }
    return (previous);
}


int main()
{
    signed int array[6][6];
    for (int i = 0 ; i < 6 ; i++){
        for(int j = 0; j < 6 ; j ++){
            cin >> array[i][j];
        }
    }

    signed int max_value = hourglass(array);
    cout << max_value;


}