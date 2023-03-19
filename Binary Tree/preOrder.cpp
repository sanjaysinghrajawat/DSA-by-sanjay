#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createNode(Node* root)
{
    cout << "Enter Data ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data left of " << data << endl;
    root->left = createNode(root->left);

    cout << "Enter data right of " << data << endl;
    root->right = createNode(root->right);

    return root;    
}

// using Recursion
void preOrder(Node* root)
{
    if(root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}



int main()
{
    Node* root = NULL;

    root = createNode(root);

    preOrder(root);


    return 0;
}

// 5 7 16 -1 -1 18 -1 -1 10 32 -1 -1 23 -1 -1