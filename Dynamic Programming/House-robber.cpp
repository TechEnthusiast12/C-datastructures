#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// This is the house robber problem that gives the best combination of elements in the array 
// Such that the sum of them is the maximum u can get. The constraint is that you cannot choose
// to neighbouring elements.

int MaxHaul(const vector<int> & houses){
    vector<int> temp(houses.size());
    temp[0] = houses[0];
    temp[1] = max(houses[0], houses[1]);
    for(int i = 2 ; i < houses.size(); i++){
        temp[i] = max(houses[i]+temp[i-2], temp[i-1]);
    }
    return temp[temp.size()-1];
}

int main(int argc, char const *argv[])
{
    vector<int>houses{1,10,20,30};
    cout<<MaxHaul(houses)<<endl;
    
    return 0;
}
