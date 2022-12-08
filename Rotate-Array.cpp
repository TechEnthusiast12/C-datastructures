// You are supposed to rotate the array based on the value k.
// given input=[1,2,3,4,5,6,7], k = 3,   output = [5,6,7,1,2,3,4]
#include <iostream>
#include <vector>
using namespace std;

// Solution no. 1
/*
void rotate(vector<int> & nums, int k)
{

    int counter = nums.size();
    for(int i = 0; i<k; i++){
        if(--counter == -1){
            counter = nums.size() - 1;
        }
       
    }
     cout<<counter<<endl;
    
     vector<int> temp;
    
    for(int i = 0; i < nums.size(); i++){
        temp.push_back(nums[counter]);
        counter = (counter + 1) % nums.size();
    }
    
    for(int i = 0; i < nums.size(); i++){
        nums[i] = temp[i];
    }
    
    for(int i = 0 ; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }

}
*/

// Solution no.2 O(1) space

void rotate(vector<int> & nums, int k){
    
}


int main(int argc, char const *argv[])
{
    vector<int> test{1, 2, 3, 4, 5};
    int k = 6;
    rotate(test, k);
    
}
