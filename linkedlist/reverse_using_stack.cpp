#include <stack>
#include <bits/stdc++.h>
using namespace std;
 
Node* reverseLinkedList(Node *head)                    //using stack(brute force)  tc = o(n + n)    sc = o(n) as stack is used
{
    Node* temp = head;
    stack<int> st;
    while(temp)
    {
       st.push(temp->data);
       temp = temp->next;
    }

    temp = head;
    while(temp)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}





class ListNode {
public:                                                  //optimised  tc = O(n)   sc = o(1)
    ListNode* reverseList(ListNode* head) {

        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp!= NULL)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
        
    }
};