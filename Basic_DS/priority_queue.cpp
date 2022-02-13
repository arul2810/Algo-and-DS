#include <iostream>
#include <queue>

using namespace std;

int main(){

    priority_queue <int> queue_int;

    int size = 5;

    int i = 0 ;

    while ( i != 10 ){

        int temp;

        cin >> temp;

        if ( queue_int.size() < size ){

            queue_int.push(temp);

        }else{
            
            if ( temp < queue_int.top() ){

                queue_int.pop();
                queue_int.push(temp);
            }
        }

        i++;

    }

    while( !queue_int.empty() ){

        cout << queue_int.top() ;
        queue_int.pop();

    } 




}