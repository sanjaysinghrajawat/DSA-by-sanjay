#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() {}

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *&head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void push_front(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, int data, int position)
{
    int cnt = 1;
    Node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // newNode create
    Node *newNode = new Node(data);

    // now head traverse and reached the position
    newNode->next = temp->next;

    temp->next = newNode;
}

void push_back(Node *&head, int data)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // now loop reach till last element
    Node *newNode = new Node(data);

    newNode->next = NULL;

    temp->next = newNode;
}

// delete node using data/key
void deletNode(Node *&head, int key)
{
    // store head to temp
    Node *temp = head;
    Node *prev = NULL;

    // if key is present at first node/head
    if (temp->data == key && temp != NULL)
    {
        head = head->next;
        // temp->next = NULL;
        delete temp;
        return;
    }

    // if key is not present at head
    // then traverse list
    while (temp->data != key && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    // we traverse whole list but not found key then
    if (temp == NULL)
        return;

    // if we got key
    prev->next = temp->next;
    delete temp;
}

int main()
{

    Node *head = NULL;
    push_front(head, 3);
    push_front(head, 2);
    push_front(head, 1);
    push_front(head, 6);
    push_front(head, 9);
    push_front(head, 5);

    // printLL(head);

    insertAtPosition(head, 100, 7);

    // printLL(head);

    push_back(head, 200);
    push_back(head, 201);

    deletNode(head, 201);

    printLL(head);

    return 0;
}