#include <iostream>
#include <string>
using namespace std;



int operations( string string1 , string string2, int size1, int size2, int current_1 , int current_2, int operations_min ){


    if ( string1[current_1] == string2[current_2]){

        current_1++;
        current_2++;

        if ( current_1 < size1 && current_2 < size2){
            
            int temp_oper = operations ( string1, string2, size1, size2, current_1, current_2, operations_min);
            operations_min = operations_min + temp_oper;
            return operations_min;

        }else{
            
            int temp_oper = abs ( current_1 - current_2 );;
            temp_oper = operations_min + temp_oper;

            return operations_min;

        }
    }else{

        int temp_1;
        int temp_2;
        int temp_3;

        temp_1 = operations ( string1, string2, size1, size2, current_1, current_2++ ,operations_min );
        temp_2 = operations ( string1, string2, size1, size2, current_1++, current_2++, operations_min);
        temp_3 = operations ( string1, string2, size1, size2, current_1++, current_2, operations_min);

        if ( temp_1 < temp_2){
            if ( temp_1 < temp_3 ){

            }else{
                temp_1 = temp_3;
            }
        }else if ( temp_2 < temp_3 ){
            temp_1 = temp_2;
        }else{
            temp_1 = temp_3;
        }

        operations_min =temp_1 + operations_min;

        return operations_min;
    }



}



int main(){

    string string1;

    string string2;

    cin >> string1;

    cin >> string2;

    int size_1;

    int size_2;

    size_1 = string1.size();
    size_2 = string2.size();



    int min_oper = operations ( string1, string2, size_1, size_2, 0,0,0);

    cout << min_oper;




}