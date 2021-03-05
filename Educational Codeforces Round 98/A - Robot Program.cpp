//
// Created by arul2 on 11/19/2020.
//

#include <iostream>
#include "string"

using namespace std;

int main() {

    int testcases;
    cin >> testcases;
    //Actual Code
    for(int test=0;test<testcases;test++){

        int x,y;
        cin >> x >> y;
        if(x == y){
            cout << x + y << endl;
        }else {
            if(x > y){
                int  temp;
                temp = x - y - 1;
                cout << x + y + temp << endl;
            }else{
                int temp;
                temp = y - x - 1;
                cout  << x + y + temp << endl;
            }
        }

    }


    return 0;
}
