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
}