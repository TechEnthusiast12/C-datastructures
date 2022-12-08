#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

// Map Solution But O(N) time complexity and O(N) Space complexity
/*
int singleNumber(vector<int> & nums){
 map<int, int> temp;
 for(int x: nums){
     if(temp.count(x) < 1){
         temp[x] = 1;
     }
     else{
         temp[x] = temp[x] + 1;
     }
 }
 for(auto & x: temp){
     if(x.second != 1){
         continue;
     }
     else{
         return x.first;
     }
 }
 return -1;
}

*/

// Better solution that has O(N) time complexity but O(1) space Complexity
int singleNumber(vector<int> & nums){
    sort(nums.begin(), nums.end());
    if(nums.size() % 2 == 0){
        for(int i = 0 ; i < nums.size() - 1; i++){
        if(nums[i] == nums[i+1]){
            i++;
            continue;
        }
        else{
            return nums[i];
        }
    }
    }
    else{
        for(int i = 0 ; i < nums.size() - 1; i++){
         if(nums[i] == nums[i+1]){
             i++;
            continue;
            }
         else{
             
            return nums[i];
            }
        }
    }
    return nums[nums.size()-1];
}


int main(int argc, char const *argv[])
{
    vector<int> nums{4, 1,1, 2,2 , 3,3 };
    cout<<singleNumber(nums)<<endl;

    
    return 0;
}
