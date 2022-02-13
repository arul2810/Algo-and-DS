#include<iostream>
#include <queue>

using namespace std;


int main (){


    long test_cases;

    cin >> test_cases;

    for ( long i = 0 ; i < test_cases ; i++ ){

        long array_size;

        cin >> array_size;
        
        priority_queue <long> input_queue;

        int flag = 1;
        for ( long j = 0 ; j < array_size ; j++ ){


            if ( j == 0) {
                long temp;
                cin >> temp;
                input_queue.push(temp);
            }else{

                long temp;
                cin >> temp;

                if ( temp > input_queue.top()){
                    input_queue.push(temp);
                }else{
                    cout << "NO\n";
                    flag = 0;
                    break;

                }
            }

        }

        if ( flag ){
            cout << "YES\n";
        }


    }




}