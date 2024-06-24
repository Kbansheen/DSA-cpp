#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};


//traversing the list
void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        
        cout<< temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}

//finding length of list
int length(Node* head)
{
    int len = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        len++;
        temp = temp -> next;
    }
    return len;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    cout << length(head);

}