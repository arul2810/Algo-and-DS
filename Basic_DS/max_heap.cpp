#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;


int main(){



    int size = 5;

    int i = 0 ;

    int current_size = 0; 

    vector <int> array;


    while ( i != 10 ){

        int temp;

        cin >> temp;

        if( current_size < size ){

            array.push_back(temp);
            current_size ++;

            if ( current_size == size ){
                make_heap (array.begin(), array.end());
            }
        }else{
            
            if ( array.front() > temp ){
                pop_heap(array.begin(), array.end() );
                array.pop_back();
                array.push_back(temp);
                push_heap ( array.begin(), array.end() );
            }

        }

        i++;

    }

    i = 0;

    while ( i < size ){

        int temp;
        temp = array.front();
        cout << temp;
        pop_heap(array.begin(), array.end());
        array.pop_back();
        i++;

    }





}