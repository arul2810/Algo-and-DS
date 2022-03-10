#include <iostream>
#include <math.h>

using namespace std;


// To find GCD of a and b
long gcd(long a, long b);
 
// To compute x raised to power y under modulo m
long power(long x, unsigned long y, unsigned long m);
 
// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(long a, long m)
{
    long g = gcd(a, m);
    if (g != 1)
        return;
    else
    {
        // If a and m are relatively prime, then modulo
        // inverse is a^(m-2) mode m
        cout << power(a, m - 2, m)<<"\n";
    }
}
 
// To compute x^y under modulo m
long power(long x, unsigned long y, unsigned long m)
{
    if (y == 0)
        return 1;
    long p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}
 
// Function to return gcd of a and b
long gcd(long a, long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){


    long test_cases;

    cin >> test_cases;

    for ( long test_case_loop = 0 ; test_case_loop < test_cases ; test_case_loop ++ ){

        long array_size, number_of_child;

        long sum = 0;
        
        cin >> array_size >> number_of_child;

        for ( long array_loop = 0 ; array_loop < array_size ; array_loop++ ){

            long temp;
            cin >> temp;
            sum = sum + temp;
        }
        cout << "Case #"<<test_case_loop+1<<": ";
        
       long modvalue = fmod ( sum , number_of_child );

       cout << modvalue << "\n";

    }



}