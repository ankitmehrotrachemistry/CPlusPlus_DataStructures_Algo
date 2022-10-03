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

        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for Node with data" << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d)
{
    // Empty List
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else
    {
        // Non-Empty List
        // Assuming that Element is present in the List

        Node* curr = tail;

        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    do
    {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node* tail = NULL;

    // Inserting in Empty List
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    return 0;
}