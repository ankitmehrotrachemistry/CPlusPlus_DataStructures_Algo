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

    ~Node()
    {
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory Free for node with data " << val << endl; 
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

void InsertAtHead(Node* &tail, Node* &head, int d)
{
    // Empty List
    if(head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node* &tail, Node* &head, int d)
{
    // Empty List
    if(head == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    if(position == 1)
    {
        InsertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    // Insert at Last Position
    if(temp -> next == NULL)
    {
        InsertAtTail(tail, head, d);
        return;
    }

    // Create a Node for d
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* &head)
{
    // Deleting First or Start Node
    if(position == 1)
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // Deleting any Mid Node or Last Node
        
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }

}

int main()
{
    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    InsertAtHead(tail, head, 11);
    print(head);

    InsertAtHead(tail, head, 21);
    print(head);

    InsertAtHead(tail, head, 41);
    print(head);

    InsertAtHead(tail, head, 51);
    print(head);
    
    InsertAtTail(tail, head, 100);
    print(head);

    InsertAtPosition(tail, head, 2, 200);
    print(head);

    InsertAtPosition(tail, head, 1, 220);
    print(head);

    InsertAtPosition(tail, head, 8, 240);
    print(head);

    InsertAtPosition(tail, head, 9, 280);
    print(head);

    deleteNode(1, head);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;

    deleteNode(6, head);
    print(head);
    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;

    return 0;
}

