#include<iostream>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> x{1,2,3,4};
   
   x.insert(7);
   x.insert(6);
    
    set<int>::iterator it;
    it = x.find(3);
    if(it != x.end()){
         x.erase(it, x.end());
    }
    for(auto & pair: x){
       std::cout<<pair<<endl;
    }
    return 0;
}
