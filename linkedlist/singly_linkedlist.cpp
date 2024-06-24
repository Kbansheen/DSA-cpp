#include<iostream>
using namespace std;


class Node
{
   public:
   int data;
   Node* next ;

   Node(int data)
   {
    this->data = data;
    this->next = NULL;
    
   }

   //destructor
   ~Node()
   {
    
    //memory free
    if(this -> next != NULL)
    {
        delete next;
        this -> next  = NULL;
    }
   }
};

void insertAtHead(Node* &head, int d)
{
    //new code create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head)
{
    //new pointer create to avoid new memory allocation
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d)
{
    Node* temp = head;
    int i =  1;

    if(pos == 1)
    {
        insertAtHead(head, d);
        return;
    }

    while(i < pos-1)
    {
        temp = temp -> next;
        i++;
    }

//if inserting at last position to make sure tail is updated
    if(temp -> next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    //create a node
    Node* NodeToInsert = new Node(d);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;

}

void deleteNode(Node* &head, int pos)
{
    //delete first or start node
    if(pos == 1)
    {
        Node* temp = head;
         head = head -> next;
         //memory free of start node
         temp -> next = NULL;
         delete temp;

    }
    else
    {
        //deleting at middle or last node

        Node* current = head;
        Node* prev = NULL;

        int i = 1;
        while(i < pos)
        {
            prev = current;
            current = current -> next;
            i++;

        }
        
        prev -> next = current ->next;
        current -> next = NULL;
        delete current;
    }

}

int main()
{
    //new node create
    Node* node1 = new Node(10);
    //cout<< node1->data<<endl;
    //cout<< node1->next<<endl;

//head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,12);

    
    insertAtHead(head,15);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head, tail,  3, 22);
    print(head);
    insertAtPosition(head, tail, 6, 4);
    print(head);

    deleteNode(head, 2);
    print(head);

    return 0;
}