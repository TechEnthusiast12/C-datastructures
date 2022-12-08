#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool FindSum(const vector<int> & nums, int target){
    unordered_set<int> sol;
    for(auto & temp: nums){
        sol.insert(temp);
    }
    for(auto & temp: sol){
        if(target>= temp){
            if(sol.count(target-temp) > 0){
                return true;
            }
        }
        else{
            if(sol.count(temp-target) > 0){
                return true;
            }
        }
    }
    return false;
}


int main(int argc, char const *argv[])
{
    vector<int> x{1,2,3,4};
   cout<< FindSum(x, 7)<<endl;
    return 0;
}
