#include <iostream>
#include <math.h>    

using namespace std;

double gcd(double a, double b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

double num_factors(double num) {
   double i;
   double num_factors = 0;
   for(i=1; i <= num; i++) {
      if (fmod(num,i) == 0){
      cout << i << " ";
      num_factors = num_factors + 1;
      }
   }

   return num_factors;
}

int main(){

    double N;

    double p;

    double q;

    cout << "Enter P: ";
    cin >> p;
    cout << "\n" << "Enter Q : " ;
    cin >> q;

    N = p * q;

    cout << " \n " << "Value of N is " << N;

    // Find e

    double e = 1;

    double z = ( p-1 ) * (q-1);

    cout << " \n " << "Value of Z is " << z << "\n" ;

    int flag = 1;

    int a ;
    int b;
    for ( e = 2 ; flag == 1 ; e = e + 1 ){

        //cout << " Value of e is " << e << "\n" ;
        double temp ;

        temp = gcd ( e ,z );

        //cout << temp;

        if ( temp == 1) {
            flag = 0;
        }

    }

    e = e - 1;

    cout  << "\n" << " Value of E  is : " << e ;

    double m ;

    cout << "\n";

    cout << "Enter Message:" ;

    cin >> m;

    cout << "\n";

    double d;

    flag = 1;

    for ( d = 2 ;  flag ; d = d + 1){

        double temp;

        temp = (e*d) - 1;

        if ( fmod(temp,z) == 0){
            flag = 0;
        }
    }

    d = d -1;

    d = 29;

    cout << "Value of d  is : " << d ;
    cout << "\n";
    
    double enc;

    double temp ;
    
    temp = pow ( m , e );

    enc = fmod(temp,N);
    cout << "Encrypted message is " << enc << "\n";


    cout << "Entering Decryption part of the program" << "\n";

    // Decryption Part of the program

    temp = pow ( enc , d );

    cout << temp << " " << N;

    double msg;

    msg = fmod(temp,N);

    cout << "The Message is : " << msg << "\n";

    // Entering hacking part of the program

    cout << "Entering hacking part....\n";

    double number_of_factors;
    double N_hack;

    cout << "Enter N for Hack:" ;

    cin >> N_hack;

    double e_hack;

    cout << "\n" << "Enter e for hacking:" ;

    cin >> e_hack ;

    cout << "\n";

    number_of_factors = num_factors ( N_hack );

    double *factors_array =  new double [number_of_factors];

    long long j = 0 ;

    for(double i=1; i <= N_hack; i++) {
      if ( fmod(N_hack,i) == 0){
       // cout << i << " ";
        factors_array [j] = i;
        j = j + 1;
      }
   }

   flag = 1;

   double d_hack;


   for ( long long i = 0 ; i < number_of_factors && flag==1 ; i ++ ){
       for ( long long j = 1 ; j < number_of_factors && flag==1 ; j++) {
           
           double z_hack;
           double p_hack;
           double q_hack;

           p_hack = factors_array[i];
           q_hack = factors_array[j];

           cout << p_hack << " " << q_hack << "\n";

           double e_hack_check;

           if( factors_array[i] * factors_array[j] == N_hack && factors_array[i] != 1 && factors_array[j] != 1){

            z_hack = (p_hack -1 ) * ( q_hack -1 );

                int flag_gcd = 1 ;

                for ( e_hack_check = 2 ; flag_gcd == 1 ; e_hack_check = e_hack_check + 1 ){

                    double temp_gcd ;

                    temp_gcd = gcd ( e_hack_check ,z_hack );

                    //cout << "Value of temp gcd is: " << temp_gcd << "\n";

                    //cout << temp;

                    if ( temp_gcd == 1) {
                        flag_gcd = 0;
                    }

                }

                //cout << "E Hack check check : " << e_hack-1;
            e_hack_check = e_hack_check - 1;            

            if (e_hack_check == e_hack){
                flag = 0;
                int flag_d = 1;
                //cout << "E Hack check check : " << e_hack-1 << "\n";
                
                for ( d_hack = 2 ;  flag_d; d_hack = d_hack + 1){

                    double temp_2;

                    temp_2 = (e_hack*d_hack) - 1;

                    if ( fmod(temp_2,z_hack) == 0){
                        flag_d = 0;
                        
                    }
            
            
                }
            }
           }
    }}

    cout <<"\n";

    cout <<"Value of d hack is :" << d_hack-1;


}