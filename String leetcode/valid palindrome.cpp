#include<iostream>
#include<string>
#include<cctype>
#include<stack>
using namespace std;

bool isPalindrome(string s) {
        stack<char> result;
        int counter = 0;
        if(s == ""){
            return true;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])){
                if(s[i] >= 65 and s[i] <= 90){
                    s[i] = s[i] + 32;
                }
            }
        }
       cout<< s.size()<<endl;
        for(string::iterator it = s.begin(); it != s.end(); it++){
            if(!(isalnum((*it)))){
                cout<<++counter<<" ";
                s.erase(it);
                it--;
            }
            else{
                continue;
            }
        }
       cout<<s.size()<<endl;
        if(s.size() % 2 == 0){
        for(int i = 0; i < s.size()/2; i++){
            if(isalnum(s[i]))
            {
                result.push(s[i]);
                
                    
            }
        }
        for(int i = s.size()/2; i<s.size(); i++){
            if(isalnum(s[i])){
                 if(result.top() != s[i]){
                    
                return false;
            }
            result.pop();
            }
        }
        }
        else{
            for(int i = 0; i <= s.size()/2; i++){
                if(isalnum(s[i])){
                    result.push(s[i]);
                    cout<<s[i]<<endl;
                }
            
        }
            for(int i = (s.size()/2) ; i<s.size(); i++){
                if(isalnum(s[i]))
                {
                if(result.top() != s[i]){
                    cout<<result.top()<<" "<<s[i]<<endl;
                    return false;
                }
                result.pop();
                }
        }
            
        }
         return true;   
    }

int main(int argc, char const *argv[])
{
    string a("A man, a plan, a canal: Panama");
    cout<<isPalindrome(a)<<endl;
  
}
