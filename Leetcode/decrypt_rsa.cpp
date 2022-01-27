#include <iostream>
#include <math.h>    

using namespace std;

int main(){

    double N;

    double d;

    double message;

    cout << "Enter messsage:" ;

    cin >> message;

    cout << "\n" << "Enter Private Key:" ;

    cin >> d;

    cout << "\n" << "Enter value of N:"  ;

    cin >> N;

    cout << "\n" << "The drypted message is : " ;

    double temp;

    double decrypt_msg;

    double calc_temp = 1 ;

    int flag = 0;

    int clac_flag = 0;

    while (clac_flag == 0){

        if ( d > 2 ){

            if ( fmod(d,2) == 0){

                    d = d/2;

                    message = fmod ( message*message, N);

            }else{

            if ( !flag ){
                calc_temp = message;
                flag = 1;
                d = d -1 ;
            }else{
                calc_temp = calc_temp * message;
                d = d -1 ;
            }

            message = fmod ( message*message, N);

            d = d/2;
            }

        }else{
            decrypt_msg = fmod ( calc_temp*message, N);
            clac_flag = 1;
        }
    }
    cout << decrypt_msg;

}