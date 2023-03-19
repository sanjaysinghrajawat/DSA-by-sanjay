#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default Contructor
    Node() {}

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new node create
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at any Position
void insertAtPostion(Node *&head, Node *&tail, int position, int data)
{
    // handling 1st position
    if (position == 0)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 0;

    while (count < position)
    {
        temp = temp->next;
        count++;
    }

    // Handling last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // new node create for insert
    Node *insertNode = new Node(data);

    insertNode->next = temp->next;

    temp->next = insertNode;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    printLL(head);
    insertAtHead(head, 5);
    printLL(head);
    insertAtTail(tail, 12);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    printLL(head);
    insertAtPostion(head, tail, 2, 15);
    printLL(head);

    return 0;
}