#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_circular(Node* head)
{
    Node* temp = head;

    if(head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;

        while(head != temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next =  fifth;
    fifth->next = head;

    print_circular(third);

    return 0;
}