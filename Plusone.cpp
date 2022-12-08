#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// This Solution doesn't work if temp > INT_MAX
/*
    vector<int> plusOne(vector<int>& digits) {
        int temp = digits[digits.size()-1];
      
        int j = 10;
        vector<int> y;
        for(int i = 0; i < digits.size()-1  ; i++){
            temp = temp + (j*(digits[digits.size()-2-i]));
            j = j*10;
        }
        temp++;
       
        string x = to_string(temp);
        
        
        for(int i = 0; i < x.size(); i++){
            y.push_back(x[i] - '0');
            
        }
        return y;
        
    }
*/

vector<int> plusOne(vector<int>& digits){
    if(digits[digits.size()-1] == 9){
        digits[digits.size()-1] = 0;
        int i = 1;
        while(digits[digits.size()-1-i] == 9){
            if(digits.size()-1-i == 0){
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
            else{
                digits[digits.size()-1-i] = 0;
            }
            ++i;
        }
        if(digits[digits.size()-1-i] < 9){
            digits[digits.size()-1-i]++;
        }
    }
    else{
        digits[digits.size()-1]++;
    }
    return digits;
}

int main(int argc, char const *argv[])
{
    vector<int> digits{1,9,9,9,9};
    vector<int> temp;
    temp = plusOne(digits);
    
    for(int i = 0; i < temp.size(); i++){
        cout<<temp[i]<<endl;
    }
    return 0;
    
}
