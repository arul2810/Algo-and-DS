#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main(){


    int row , col ;

    cin >> row >> col;

    int find_ele;

    cin >> find_ele;

    int flag = 0;

    for ( int i = 0 ; i < (row*col) ; i++){
        int temp;

        cin >> temp;

        if (temp ==find_ele){
            cout << "1";
            flag = 1;
            break;
        }
    }

    if (!flag ){
        cout << "0";
    }



return 0;

}