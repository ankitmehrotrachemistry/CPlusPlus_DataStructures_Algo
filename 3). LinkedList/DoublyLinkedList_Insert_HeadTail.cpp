#include<iostream>
using namespace std;

class Node
{
    public :
      int data;
      Node* prev;
      Node* next;

    Node(int d)
    {
       this -> data = d;
       this -> prev = NULL;
       this -> next = NULL;
    }
};

// Traverse a Doubly Linked List
void print(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}     

void InsertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtHead(head, 11);
    print(head);

    InsertAtHead(head, 21);
    print(head);

    InsertAtHead(head, 41);
    print(head);

    InsertAtHead(head, 51);
    print(head);
    
    InsertAtTail(tail, 100);
    print(head);

    return 0;
}