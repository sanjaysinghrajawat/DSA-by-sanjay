#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    // Static Allocation
    Node node1;
    cout << node1.data << endl;
    cout << node1.next << endl;

    // Dynamic Allocation
    Node *node2 = new Node;
    cout << node2->data << endl;
    cout << node2->next << endl;

    delete node2;
    
    return 0;
}