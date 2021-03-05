#include "iostream"
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    signed long int input_r[100000] = {-1};
    signed long int input_g[100000] = {-1};
    signed long int input_b[100000] = {-1};
    int count_r , count_g,count_b = 0;

    for(int i = 0; i< n ; i++){

        cin >> input_r[i] >> input_g[i] >> input_b[i] ;

    }

    for(int i = 0 ; i < q ; i ++){

        int query_r,query_g,query_b;
        cin >> query_r >> query_g >> query_b;

        for(int i = 0 ; i < 100000 ; i++){

            if(query_r == input_r[i]){
                if(query_g >= input_g[i] && query_b >= input_b[i]){
                    count_r = count_r + 1;
                }
            }

            if(query_g == input_g[i]){
                if(query_r >= input_r[i] && query_b >= input_b[i]){
                    count_g = count_g +1;
                }
            }

            if(query_b == input_b[i]){
                if(query_r >= input_r[i] && query_g >= input_g[i]){
                    count_b = count_b +1;
                }
            }

            if(count_g > 0 && count_r > 0 && count_b > 0){
                cout << "YES" << endl;
                break;
            }

        } if(count_g == 0 || count_r == 0 || count_b == 0) {
            cout << "NO" <<endl;
        }

    }

}