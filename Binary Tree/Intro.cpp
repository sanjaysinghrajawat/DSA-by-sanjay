#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Create node function that create a new Node
Node* createNode(Node* root)
{
    cout << "Enter data : ";
    int data;
    cin >> data;

    // create node
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    // inserting left of node
    cout << "Enter data for inserting left of " << data << endl;
    root->left = createNode(root->left);

    // inserting right of node
    cout << "Enter data for inserting right of " << data << endl;
    root->right = createNode(root->right);

    return root;
}

int main()
{
    Node* root = NULL;
    
    root = createNode(root);
    return 0;
}