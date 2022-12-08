#include<iostream>
#include<unordered_map>
#include <string>
using namespace std;
 bool Check(const string & a, const string & b){
       unordered_map<char, int>x;
       unordered_map<char, int>y;
       for(auto &temp: a){
           if(x.count(temp) < 1){
               x[temp] = 1;
           }
           else{
               x[temp]++;
           }
       }

       for(auto &temp: b){
           if(y.count(temp) < 1){
               y[temp] = 1;
           }
           else{
               y[temp]++;
           }
       }
       if(x.size() != y.size()){
               return false;
           }
        else{
         for(auto & temp: a){
           if(x[temp]!=y[temp]){
               return false;
           }
       }
        }
    return true;
   }

int main(int argc, char const *argv[])
{
  
   string a = "abcd";
   string b = "bcad";
   cout<<Check(a, b)<<endl;

}