#include<iostream>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string, int> x{{"a", 1}, {"b", 2}};
    pair<unordered_map<string, int>::iterator, bool> it;
    it = x.insert({"c", 3});
    

    return 0;
}
