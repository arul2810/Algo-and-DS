// HackerRank Cup 2020 - Increasing Sequence

#include "iostream"
#include "algorithm"

using namespace std;

int main(){

    int testcases;
    cin >> testcases;

    for(int i = 0 ; i < testcases ; i++){
        long int length;
        cin >> length;
        long int *array = new long int[length];
        for(long int j = 0; j < length; j ++){
            cin >> array[j];
        }
        long int count = 0;
        sort(array,array+(length-1));
        for(long int j = 0 ; j < length ; j++){

            if(array[j] == array[j+1]){
                count = count +1;
                for(int k = j+1 ; k < length ; k++ ){
                    if(array[j] == array[k]){
                        count = count + 1;
                    }else{
                        j = k;
                        break;
                    }
                }
            }
        }

        long int odder = length - count;
        if(count == 0){
            cout << "First"<<endl;
        }else if(odder%2 == 0 && count%2 == 0){
            cout << "Second" << endl;
        }else if(odder%2 != 0  && count%2 == 0){
            cout << "First" <<endl;
        }else if(odder%2 !=0 && count%2 != 0){
            cout << "Second" << endl;
        } else{
            cout <<"First" << endl;
        }
    }




}