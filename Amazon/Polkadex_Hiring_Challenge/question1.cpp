#include<iostream>
#include "math.h"

using namespace std;



int swap(int input_array[], int index1, int index2){

    int temp;

    temp = input_array[index1];
    input_array[index1] = input_array[index2];
    input_array[index2] = temp;

    return input_array[1];

}


int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
        return 1;
    if(n==1)
        return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
long findMMI_fermat(long n,long M)
{
    return fast_pow(n,M-2,M);
}
int recursion_call_function( int number_of_changes, int input_array[]){

    int valid_sorts = 0;

    // Check if there are any changes to make, if none, check if it is sorted.
    if ( number_of_changes == 0 ){
        int flag = 1;
        for ( int i = 0 ; i < 6 ; i ++ ){
            if ( input_array[i] != (i+1) ){
                //cout << "Here "<< input_array[i] <<"," << i+1 << "\n";
                flag = 0;
                break;
            }
        }

        if ( flag ) {
            return 1; // we have found a valid sort !!
        }else{
            return 0; // no valid sort found.
        }
    }else{

        for( int i = 0 ; i < 6; i++ ){
            for ( int j = i+1; j <6 ; j++ ){

                int temp_array[6];
                for( int k = 0 ; k <6 ; k++ ){

                    temp_array[k] = input_array[k];

                }

                int temp = temp_array[i];
                temp_array[i] = temp_array[j];
                temp_array[j] = temp;

               // cout << number_of_changes << "," << valid_sorts<< "\n";


                valid_sorts = valid_sorts + recursion_call_function( number_of_changes-1, temp_array);


            }
        }

        return valid_sorts;

    }



}


int main(){

    int test_cases;

    cin >> test_cases;

    for ( int i = 0 ; i <  test_cases ; i++ ){

        int number_of_changes ;

        cin >> number_of_changes;

        int input_array[6];

        for ( int i = 0 ; i < 6 ; i++ ){

            cin >> input_array[i];

        }

        long sorts_f = recursion_call_function ( number_of_changes, input_array);

       long total_combinations = pow( 15, number_of_changes);

       long m = 1000000007;

       long tot_comb_inv = findMMI_fermat(total_combinations, m);


       //cout <<"test:" << (tot_comb_inv*tot_comb_inv)%m;

       long long temp = 1;
        temp = ( temp * sorts_f ) % m;
        temp = ( temp * tot_comb_inv ) %m;

       cout << temp << "\n";


    }



}