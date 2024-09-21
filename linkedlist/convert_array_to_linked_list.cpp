#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertArray(vector<int> &arr)       //convert array into linkedlist
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i<arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}


int lengthLL(Node* head)
{
    int cnt = 0;
    Node* temp = head;                           //length of linked list
    while(temp)
    {
        temp = temp -> next;
        cnt++;
    }
    return cnt;

}

Node* deleteHead(Node* head)                      //deletion of head node
{
    if(head == NULL)
    {
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}


Node* deleteTail(Node* head)                      //deletion of tail node
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    
    Node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}



Node* deleteK(Node* head, int k)          //deletion of any kth node
{
    if(head == NULL) return head;
    if(k == 1)
    {
       Node* temp = head;
       head = head->next;
       delete(temp);
       return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}



Node* deleteValue(Node* head, int k)          //deletion of any node with a value
{
    if(head == NULL) return head;
    if(head->data == k)
    {
       Node* temp = head;
       head = head->next;
       delete(temp);
       return head;
    }

    
    Node* temp = head;
    Node* prev = NULL;
    while(temp)
    {
        
        if(temp->data == k)
        {
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}


Node* insertHead(Node* head, int value)      //insertion at head
{
    Node* temp = new Node(value, head);
    return temp;
}

Node* insertTail(Node* head, int val)       //insertion at tail
{
    Node* temp = head;
    if(head == NULL)
    {
       return new Node(val);
    }
    while(temp)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;


}


Node* insertPosition(Node* head, int k, int value)         //insertion at any position k 
{
    if(head == NULL)
    {
        if(k==1)
        {
            return new Node(value);
        }
        else
        {
            return head;
        }
    }

    if(k == 1)
    {
        return new Node(value,head);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp)
    {
        cnt++;
        if(cnt == (k-1))
        {
            Node* x = new Node(value);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}



Node* insertPosition(Node* head, int k, int value)         //insertion at any position depending on value
{
    if(head == NULL)
    {
        return NULL;
    }

    if(head->data == value)
    {
        return new Node(value,head);
    }
    
    Node* temp = head;
    while(temp->next != NULL)
    {
        
        if(temp->next->data == value)
        {
            Node* x = new Node(k, temp->next);              //k = element to be inserted
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}




int main()
{
    vector<int> arr = {1,5,8,3,6,9};
    Node* head = convertArray(arr);
    cout<< head->data << endl;


    Node* temp = head;                     //traversal of linked list
    while(temp)
    {
        cout << temp -> data << " " ;
        temp = temp -> next;
    }

    cout<<endl;
    cout<< lengthLL(head) <<endl;        //length 



Node* head2 = deleteHead(head);         //deletion of head node
cout<<head2->data;


Node* head3 = deleteTail(head);         //deletion of tail node
cout<<head3->data;

int k = 3;
Node* head4 = deleteK(head, k);         //deletion of any node k


int k = 5;
Node* head5 = deleteValue(head,k);      //deletion of any node with a value



}
