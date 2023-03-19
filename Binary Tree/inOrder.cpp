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

void levelOrder(Node* root)
{
    if(root == NULL)
    {
        cout << "Empty" << endl;
    }
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        cout << temp->data << " ";

        q.pop();

        if(root->left)
        {
            q.push(temp->left);
        }
        if(root->right)
        {
            q.push(temp->right);
        }
    }
}

// Inorder traverse without Recursion
void inOrder(Node* root)
{
    stack<Node*> s;
    Node* curr = root;

    while(curr != NULL || s.empty()== false)
    {
        // reach the left most element
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        // at this point curr at NULL
        curr = s.top();
        
        cout << curr->data << " ";

        s.pop();

        // for visiting right side of element
        curr = curr->right;
    }
}

// Inorder using Recusion
void inOrder1(Node* root)
{
    if(root == NULL) return;

    inOrder1(root->left);
    cout << root->data << " ";
    inOrder1(root->right);
}

int main()
{
    Node* root = NULL;

    root = createNode(root);

    inOrder(root);
    cout << endl;
    inOrder1(root);
    // levelOrder(root);


    return 0;
}

// 5 7 16 -1 -1 18 -1 -1 10 32 -1 -1 23 -1 -1