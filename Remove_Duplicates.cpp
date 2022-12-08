#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int RemoveDuplicate(vector<int> & temp){
   return unique(temp.begin(), temp.end()) - temp.begin();
    }


int main(int argc, char const *argv[])
{
    vector<int> test{0, 1, 1, 1, 2, 3,3};
    cout<<RemoveDuplicate(test)<<endl;

    
    return 0;
}
