//
// Created by Arul Prakash Samathuvamani on 11/1/2020.
//Code Works - Run time on Codeforces - 31ms - Needs Optimisation

#include <iostream>
#include "algorithm"

using namespace std;

int main() {

    int testcases;
    cin >> testcases;
    //Actual Code
    for(int test=0;test<testcases;test++){

        int n;
        int x;
        cin >> n;
        cin >> x;
        int *a_array = new int[n];
        int *b_array = new int [n];
        for(int i=0;i<n;i++){
            cin >> a_array[i];
        }
        for(int i=0;i<n;i++){
            cin >> b_array[i];
        }
        sort(a_array,a_array+n);
        sort(b_array,b_array+n,greater<int>());
        int flag = 0;
        for(int i=0 ; i < n ; i++){
            if(a_array[i]+b_array[i] > x){
                cout << "No" << endl;
                flag = 1;
                break;
            }
        }
        sort(a_array,a_array+n,greater<int>());
        sort(b_array,b_array+n);
        if(flag == 0){
            for(int i=0 ; i < n ; i++){
                if(a_array[i]+b_array[i] > x){
                    cout << "No" << endl;
                    flag = 1;
                    break;
                }
            }}
        if(flag == 0){
            cout << "Yes" << endl;
        }
    }

    return 0;
}
