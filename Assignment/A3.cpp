#include <iostream>
#include <queue>
using namespace std;

// Structure for binary tree node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to create a binary tree
Node *createNode()
{
    cout << "Enter Data " << endl;
    int data;
    cin >> data;

    Node *node = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data left of " << data << endl;
    node->left = createNode();

    cout << "Enter data right of " << data << endl;
    node->right = createNode();

    return node;
}

// Pre-order traversal of binary tree and find the sum of identical child node values
void postOrder(Node *root, int &sum)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left, sum);
    postOrder(root->right, sum);

    if (root->left && root->right)
    {
        sum = root->left->data + root->right->data;
        cout << "Sum " << sum << endl;
    }
}

// Function to check if the given trees are magical trees
bool isMagicalTree(Node *root1, Node *root2)
{
    int sum1 = 0, sum2 = 0;

    postOrder(root1, sum1);
    postOrder(root2, sum2);

    if (sum1 != sum2)
    {
        return false;
    }

    queue<Node *> q1, q2;

    // cout << "root1 --> " << root1->data << endl;
    q1.push(root1);
    // cout << "root2 --> " << root2->data << endl;
    q2.push(root2);

    while (!q1.empty() && !q2.empty())
    {
        Node *curr1 = q1.front();
        Node *curr2 = q2.front();

        q1.pop();
        q2.pop();

        if (curr1->left && curr2->left && curr1->right && curr2->right)
        {
            int diff1 = curr1->left->data - curr1->right->data;
            cout << "Difference of tree 1 child node is " << diff1 << endl;
            int diff2 = curr2->left->data - curr2->right->data;
            cout << "Difference of tree 2 child node is " << diff2 << endl;

            int parentDiff1 = std::abs(diff1 - curr1->data);
            cout << "parentDiff1 " << parentDiff1 << endl;

            int parentDiff2 = std::abs(diff2 - curr2->data);
            cout << "parentDiff2 " << parentDiff2 << endl;

            if (parentDiff1 != parentDiff2)
            {
                return false;
            }

            q1.push(curr1->left);
            q1.push(curr1->right);

            q2.push(curr2->left);
            q2.push(curr2->right);
        }
        else if (curr1->left == NULL && curr1->right == NULL && curr2->left == NULL && curr2->right == NULL)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

// Driver function
int main()
{
    system("cls");
    cout << "Enter values for first binary tree (-1 for no node): ";
    Node *root1 = createNode();

    cout << "Enter values for second binary tree (-1 for no node): ";
    Node *root2 = createNode();

    if (isMagicalTree(root1, root2))
    {
        cout << "Given trees are magical trees." << endl;
    }
    else
    {
        cout << "Given trees are not magical trees." << endl;
    }
    return 0;
}
// 1 8 -1 -1 7 -1 -1 5 10 -1 -1 5 -1 -1
// 1 8 3 -1 -1 2 -1 -1 7 -1 -1 9 12 5 -1 -1 0 -1 -1 3 -1 -1