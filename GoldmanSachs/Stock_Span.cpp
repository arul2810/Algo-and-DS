#include <iostream>
#include <algorithm>

using namespace std;


int main(){


    int test_cases;

    cin >> test_cases;

    for ( int loop_var = 0 ; loop_var < test_cases ; loop_var ++){

        int size;

        cin >> size;

        int array[size];

        for ( int array_loop = 0 ; array_loop < size ; array_loop ++){

            cin >> array[array_loop];

        }

        cout << "1 ";

        for ( int array_loop = 1 ; array_loop < size ; array_loop ++){


            int temp = 1;

            for ( int temp_var = array_loop-1 ; temp_var >= 0 ; temp_var--){

                //int temp = 1;

                if (temp_var == 0){
                    cout << temp << " ";
                    break;
                }

                else if (array[array_loop] < array[temp_var] ){
                    cout << temp << " ";
                    break; 
                }
                
                else{
                    temp = temp + 1;
                }
            }


        }



    }


    return 0;
}