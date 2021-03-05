//
// Created by Arul Prakash Samathuvamani on 11/1/2020.
// Code Verified to work on Code Forces

#include <iostream>
#include "algorithm"

using namespace std;

int main() {

    int testcases;
    cin >> testcases;
    //Actual Code
    for(int test=0;test<testcases;test++){

        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a+b > c+d){
            cout << a+b<<endl;
        }else{
            cout << c+d<<endl;
        }

    }

    return 0;
}
