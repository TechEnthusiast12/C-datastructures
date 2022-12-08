#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> temp;
    vector<int> result;
    for(int i = 0 ; i < nums.size() ; i++){
        temp[nums[i]] = i;
    }
    for(int i = 0 ; i < nums.size() ; i++){
        if(target-nums[i]== nums[i]){
            continue;
        }
        if(temp.count(target-nums[i]) > 0){
            result.push_back(i);
            result.push_back(temp[target-nums[i]]);
            return result;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int target = 6;
    vector<int>nums{3,2,4};
    vector<int> copy;
    copy = twoSum(nums, target);
    for(int x: copy){
        cout<<x<<endl;
    }
    
    
    return 0;
}
