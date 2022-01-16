/* A simple program to count pairs with difference k*/
#include<iostream>
using namespace std;



int main()
{
    int size;
    
    cin >> size;
    
    int array[size];
    
    for ( int loop = 0 ; loop < size; loop++){
        cin >> array[loop];
    }
   
    int k;
    
    cin >> k;
    
    int count = 0;
    
    // Pick all elements one by one
    for (int i = 0; i < size; i++)
    {    
        // See if there is a pair of this picked element
        for (int j = i+1; j < size; j++){
            if (array[i] - array[j] == k || array[j] - array[i] == k ){
                count++;
            }
        }
    }
   
    
    cout << count;
    return 0;
}
