#include <iostream>
#include "string"

using namespace std;

int main() {

    int testcases;
    cin >> testcases;
    //Actual Code
    int max;
    int min;
    int max_count =0;
    int min_count=0;

    for(int test=0;test<testcases;test++){

        int temp;
        cin >> temp;
        if(test == 0){
            max = temp;
            min = temp;

        }else {
            if (temp > max){
                max_count = max_count + 1;
                max = temp;
            }else if(temp < min){
                min_count = min_count + 1;
                min = temp;
            }
        }

    }

    cout << max_count << " "<<min_count<<endl;


    return 0;
}
