#include<iostream>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int>x{{1,1}, {2,2}};
    pair<map<int,int>::iterator, bool> it;
   it = x.insert(pair<int, int>{3,3});
   if(it.second == false){
       cout<<"The pair was already there"<<endl;
       cout<<"and the value is "<<it.first->second<<endl;
   }
   else{
       cout<<"Newly inserted pair is "<< it.first->second<<endl;
   }

   for(auto & temp: x){
       temp.second = 2;
   }
   
   map<int,int>::iterator ret;
   ret = x.find(2);
   if(ret!=x.end()){
       x.erase(ret, x.end());
   }

   for(auto & temp: x){
       cout<<temp.first<<" "<<temp.second<<endl;
   }
   ret = x.find(1);
   cout<<ret->first<<" "<<ret->second<<endl;

    return 0;
}
