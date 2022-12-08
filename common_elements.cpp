#include <iostream>
#include<vector>
#include <map>
using namespace std;

bool ContainsDups(const vector<int> & nums){
    map<int, int> x;
    for(int i =0; i<nums.size(); i++){
        if(x.find(nums[i]) == x.end()){
            x[nums[i]] = i;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    map<int, int> x;
    vector<int>y;
    for(int i = 0; i< 100; i++){
        y[i] = i;
    }
    cout<< ContainsDups(y)<< endl;
}