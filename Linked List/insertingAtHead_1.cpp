#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default Contructor
    Node(){}

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    
    // Dynamic Allocation
    Node *node1 = new Node(10);

    // Inserting at Head
    Node* head = NULL;
    head = node1;
    Node* temp = new Node(11);
    temp->next = head;
    head = temp;

    
    // printing / traversing linked list
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}