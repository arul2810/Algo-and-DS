//
// HackerRank Valley Counting Problem
// Created by hello@arulprakash.dev on 9/30/2020.
// Program Verified to Work on HackerRank
//

#include "iostream"
using namespace std;
int main()
{
    int steps;

    cin >> steps;
    char current_step;
    char U = 'U';
    int i ;
    signed int initial = 1;
    int valleys = 0;

    int count = 0;
    for (i = 0; i < steps ; i ++)
    {
        cin >> current_step;

        if(current_step == 'U')
        {
            initial = initial + 1;


        } else{

            initial = initial - 1;


        }

        if(initial < 1 && count > 0){
            count = count + 1;
        }else if (initial < 1 && count == 0){
            valleys = valleys + 1;
            count = count + 1 ;
        }else if (initial >=1 ){
            count = 0;
        }





    }


    cout << valleys ;

}
