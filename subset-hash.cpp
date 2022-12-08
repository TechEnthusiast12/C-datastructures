#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool subset(const vector<int>& a, const vector<int>& b){
    unordered_set<int> x;
    if(a.size()>= b.size()){
        for(auto &temp: a){
            x.insert(temp);
        }
        for(auto & temp: b){
            if(x.count(temp)<1){
                return false;
            }
            continue;
        }
    }
    else{
        for(auto &temp: b){
            x.insert(temp);
        }
        for(auto & temp: a){
            if(x.count(temp)<1){
                return false;
            }
            continue;
        }
    }
   return true;
}

int main(int argc, char const *argv[])
{
    vector<int>x{1,2,3,4,5};
    vector<int>y{2,4};
    cout<<subset(x,y)<<endl;
    return 0;
}
