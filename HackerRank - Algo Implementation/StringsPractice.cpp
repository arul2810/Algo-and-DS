//
// Created by arul2 on 9/27/2020.
//
#include "iostream"
#include "string"
using namespace std;
int main()
{
    string test ;
    getline(cin, test);
    istringstream temp(test);
    do{
        string temp2;
        temp2 >> temp;
        cout << temp;
    }while (temp);

}
