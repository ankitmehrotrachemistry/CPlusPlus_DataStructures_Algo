#include<iostream>
using namespace std;

class Node
{
    public :
       int data;
       Node* next;
    
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node()
    {
        int value = this -> data;

        // Memory Free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is Free for Node with data " << value << endl; 
    }
};

void InsertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
} 

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    // Insert at Start 
    if(position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }
    
    if(temp -> next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    // Creating a Node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;    
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head)
{
    // Deleting First or Start Node
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;

        // Memory Free Start Node
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

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}
int main()
{
    // Create a New Node

    Node* node1 = new Node(10);

    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;
    
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 2, 22);
    print(head);

    cout << "Head is : " << head->data << endl;
    cout << "Tail is : " << tail-> data << endl;
    
    deleteNode(4, head);
    print(head);

    cout << "Head is : " << head->data << endl;
    cout << "Tail is : " << tail-> data << endl; // TO DO (HomeWork)

    return 0;
}