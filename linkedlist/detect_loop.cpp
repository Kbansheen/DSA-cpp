
#include<bits/stdc++.h>
using namespace std;                                             //using hashing    sc = o(n)

class Node {
public:
    Node* middleNode(Node* head) {

        Node* temp = head;
        map<Node*,int> mpp;

        while(temp)
        {
            if(mpp.find(temp))
            return true;

            temp = temp->next;
        }
        return false;
        
    }
};





//using hare and tortoise algo(optimised)     sc = o(1) , tc = o(n)


class Solution {
  public:

    bool detectLoop(Node* head) {
         Node* slow = head;
       Node* fast = head;
       while(fast != NULL && fast->next != NULL)
       {
           slow = slow->next;
           fast = fast->next->next;

           if(slow == fast)
           return true;
       }

       return false;
    }
};