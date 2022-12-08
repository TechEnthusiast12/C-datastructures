#include<iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, float>results;
    results.insert(pair<string, float>{"Anna", 3.33});
    results.insert(pair<string, float>{"John", 2.34});
    map<string, float>:: iterator it;
    it = results.find("Mark");
    if(it != results.end()){
        cout<<"Yes"<<endl;
    }
    for(auto & temp: results){
        cout<<"The result of "<<temp.first<<"is "<< temp.second<<endl;

    }
    
}
