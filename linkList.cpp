#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};


int main()
{
    int n, val;

    Node *head = NULL, *cur;

    cout << "Enter Number of Nodes : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cout << "Enter Values : ";
        cin >> val;

        // Node creating
        Node *temp = new Node;
        temp->data = val;
        temp->link = NULL;

        if(head == NULL)
        {
            head = temp;
            cur  = temp;
        }
        else
        {
            cur->link = temp;
            cur = temp;
        }
    }

    // Treversing
    Node *ptr = head;
    // ptr = head;

    while(ptr != NULL)
    {
        cout << ptr << endl;
        cout << ptr->data << " ";
        ptr = ptr->link;
    }

    return 0;
}