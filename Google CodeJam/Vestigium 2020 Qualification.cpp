//
// Created by Arul Prakash Samathuvamani - PGT University of Leeds for Google CodeJam 2020 Qualification Questions
// Verified to pass the test cases on CodeJam
// Contact : hello@arulprakash.dev
//

#include <iostream>
#include "algorithm"
#include "string"
#include "vector"

using namespace std;


// Main Function
int main() {

    // Declaring number of test cases

    long test_cases;
    cin >> test_cases;

    // Iterating for every test case

    for(int iter = 0 ; iter < test_cases ; iter++ ){

        // Getting the size of the matrix
        long size_of_matrix;
        cin >> size_of_matrix;
        long trace = 0;
        int **array = new int*[size_of_matrix];
        for(int i = 0 ; i < size_of_matrix ; i++){
            array[i] = new int[size_of_matrix];
        }
        for(int i = 0 ; i < size_of_matrix ; i++){
            for(int j = 0 ; j < size_of_matrix ; j++){
                int temp;
                cin >> temp;
                array[i][j] = temp;
                if(i == j){
                    trace = trace + temp;
                }
            }
        }

        int row_repeat = 0;
        int col_repeat = 0;

        // Checking repeat elements in row

        for(int i = 0 ; i < size_of_matrix ; i++){
            int flag = 0 ;
            for(int j = 0 ; j < size_of_matrix ; j++){
                for(int k = j+1 ; k < size_of_matrix ; k++){

                    if(array[i][j] == array[i][k] && flag == 0){
                        row_repeat =row_repeat + 1;
                        flag = 1;
                    }
                }
            }
        }
        // Checking for repeat in column elements

        for(int i = 0 ; i < size_of_matrix ; i ++){
            int flag = 0;
            for(int j=0 ; j < size_of_matrix ; j++){
                for(int k = j+1 ; k < size_of_matrix ; k++){
                    if(array[j][i] == array[k][i] && flag == 0){
                        col_repeat = col_repeat + 1;
                        flag = 1;
                    }
                }
            }
        }

        // Printing Output

        cout << "Case #"<<iter+1<<": "<<trace << " "<<row_repeat<<" "<<col_repeat;
        cout << "\n";



    }



}
