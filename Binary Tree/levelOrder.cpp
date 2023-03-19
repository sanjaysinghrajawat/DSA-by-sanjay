#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    // insert first element
    q.push(root);
    // cout << "First element " << root->data << endl;

    while(!q.empty())
    {
        // pick front element
        Node* temp = q.front();
        cout << temp->data << " ";

        // delete element from queue
        q.pop();

        if(temp->left != NULL)
        {
            // cout << "Left " << temp->data << endl;
            q.push(temp->left);
        }
        if(temp->right != NULL)
        {
            // cout << "Right " << temp->data << endl;
            q.push(temp->right);
        }
    }
}
// 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1

int main()
{
    Node* root = NULL;

    root = createNode(root);

    levelOrderTraversal(root);
    return 0;
}