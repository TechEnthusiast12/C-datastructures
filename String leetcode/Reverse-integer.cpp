#include<iostream>
#include<vector>
#include<string>
using namespace std;

 int reverse(int x) {
        string temp = to_string(x);
        string temp2 = "";
        vector<char>a;
        for(int i = 0; i < temp.size() ; i++){
            temp2 =  temp[i] + temp2;
        }
        
        if(x < 0){
            temp2 = '-' + temp2;
        }
        
        return stoi(temp2);
       
    }

    int main(int argc, char const *argv[])
    {
       cout<< reverse(-123)<<endl;
        return 0;
    }
    