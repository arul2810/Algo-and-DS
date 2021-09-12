#include<bits/stdc++.h>

#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
#include <sstream>


using namespace std;



const int mod =1000000007;


int main()
{

    

    ofstream file_print;

    file_print.open("output_A2_Protect.txt");

    ifstream inFile;

    string temp;
    
    inFile.open("Input_A2_Protect.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }


    long test_cases;

    getline( inFile, temp) ;

    stringstream geek(temp);

    geek >> test_cases;


    //long long test_cases ;
    //cin>>test_cases;

    for(long long test_case_loop = 0 ; test_case_loop < test_cases ;test_case_loop++)
    {
        
        long long char_length;

        getline ( inFile, temp );

        stringstream geek ( temp );

        geek >> char_length;

        string input_string;

        getline (inFile, input_string);

        long long cnt1=0;
        long long cnt2=0;
        int flag1=0;
        int flag=0;
        long long min_count=0;
        for(long long j=0;j<char_length;j++)
        {
        long long cnt1=0;
        long long cnt2=0;
        int flag1=0;
        int flag=0;
        for(long long i=j;i<input_string.size();i++)
        {
            if(flag1==0&&input_string[i]=='O')
            {
                flag1=1;
                cnt1++;
            }
            if(flag1==1&&input_string[i]=='X')
            {
                flag1=0;
                cnt1++;
            }
            if(flag==0&&input_string[i]=='X')
            {
                flag=1;
                cnt2++;
            }
            if(flag==1&&input_string[i]=='O')
            {
                flag=0;
                cnt2++;
            }
            long long k=min(cnt1,cnt2);
            min_count+=k;
            min_count%=mod;

             
        }
       cout << "j: " << j << "\n";
    }
        cout<<"Case #"<<test_case_loop<<": "<<min_count<<endl;
        file_print << "Case #"<<test_case_loop+1<<": "<<min_count << "\n";


    }

    file_print.close();

    inFile.close();

}