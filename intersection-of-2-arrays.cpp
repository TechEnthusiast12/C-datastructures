#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
    vector<int> temp;
   
    unordered_map<int, int> copy2;
    
    for(auto & x: nums2){
        if(copy2.count(x) < 1){
            copy2[x] = 1;
        }
        else{
            copy2[x]+=1;
        }
    }
    
        for(auto & x: nums1){
            if(copy2.count(x) == 1){
                if(--copy2[x] == 0){
                    copy2.erase(x);
                }
                temp.push_back(x);
            }
        }
    return temp;
} 

int main(int argc, char const *argv[])
{

    vector<int> nums1{1,1,1,2,3,4};
    vector<int> nums2{1,1,1,3,3,4};
    vector<int> temp;
    temp = intersect(nums1, nums2);
    for(int x: temp){
        cout<<x<<endl;
    }
    return 0;
}
