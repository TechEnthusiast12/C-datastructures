#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;

struct Node
{
    int value;
    Node * left;
    Node * right;
};
void Traversal(Node * top){
    if(top == nullptr){
        return;
    }
    queue<Node *> temp;
    Node * prev;
    temp.push(top);
    
    while (!temp.empty())
    {
        prev = temp.front();
        cout<<prev->value<<endl;
        if(prev->left != nullptr){
            temp.push(prev->left);
        }
        if(prev->right != nullptr){
            temp.push(prev->right);
        }
        temp.pop();
    }
    
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
