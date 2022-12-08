#include<iostream>
using namespace std;

struct ListNode
{
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct List
{
    ListNode * head;
    List(): head(nullptr){}
    List(ListNode* temp): head(temp){}
};


ListNode * reverseList(ListNode * head){
    // recursive solution
    /*
    if(head == nullptr or head->next == nullptr){
        return head;
    }
    ListNode * res;
    res = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return res;
    */

   // Iterative solution
   

}


int main(int argc, char const *argv[])
{
   ListNode* head = new ListNode(1);
   head->next = new ListNode(2);
   head->next->next = new ListNode(3);
   head->next->next->next = nullptr;
   reverseList(head);
   
    return 0;
}

