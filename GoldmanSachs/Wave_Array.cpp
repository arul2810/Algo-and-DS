#include <iostream>
#include <algorithm>

using namespace std;

int main(){


    int array_size;

    cin >> array_size;

    int array[array_size];

    for ( int temp = 0 ; temp < array_size ; temp ++){

        cin >> array[temp];

    }

    sort(array, array+array_size);

    int print_flag = 0;

    for ( int temp = 1; temp < array_size ; temp = temp + 2){

        cout << array [temp ] << " " << array[temp-1] << " ";

        print_flag = print_flag + 2;

    }

    if (print_flag != array_size ){
        cout << array[array_size-1];
    }



    return 0;
}