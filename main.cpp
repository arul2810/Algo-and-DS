#include <iostream>
#include "algorithm"

using namespace std;

int main() {

double testcases;

cin >> testcases;

for(int i = 0 ; i < testcases ; i++){
if(i > 0){
    cout << "\n";}
    double n;
    cin >> n;

    long *array = new long [n];
    int flag = 1;
    for(int j=0;j<n;j++){
        cin >> array[j];
    }

    sort(array,array+n);

    int number_of_zero = 0;
    int distinct = 0;


    for(int j = 0 ; j < n ; j++){

        if(array[j] == 0){
            number_of_zero = number_of_zero +1;
        }else{
            distinct = distinct + 1;
            }
        }




    //cout << distinct << "\n" << number_of_zero << "\n";

    if(number_of_zero <= distinct){
        flag =1;
    }else{
        flag = 0;
    }


    if(flag == 1){
        cout<< "YES";
    }else{
        cout << "NO";
    }



}








    return 0;
}