#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {


        Node* temp = head;                                                                 //brute force
        int cnt  = 0;
        
        if(head == NULL)
        return -1;
        
        while(temp)
        {
            cnt++;
            temp = temp->next;
        }
         temp = head;
        int midNode = (cnt/2) + 1;
        while(temp)
        {
            midNode = midNode - 1;
            
            if(midNode == 0)
            break;
            
            temp = temp->next;
        }
        return temp->data;
    }
};




//using tortoise and hare algo      tc = o(n/2)    optimised

class ListNode {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};