#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(){}

    Node(int data)
    {
        this->data = data;
        // this->next = NULL;
    }
};

void printLL(Node* &head)
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
    Node *head = new Node(10);
    Node *second = new Node(13);
    Node *third = new Node(12);

    head->next = second;
    second->next = third;
    third->next = NULL;

    printLL(head);

    return 0;
}