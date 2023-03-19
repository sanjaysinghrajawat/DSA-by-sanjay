#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    // newNode->prev = NULL;

    if(head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}

void printLL(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    printLL(head);
    return 0;
}