#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string data;
    Node *next;

    Node(string data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(Node *&tail, string data)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    // non-empty list
    else
    {
        Node *curr = tail;

        while (curr->next != tail)
        {
            curr = curr->next;
        }

        // insert node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletePostion(Node *&tail, int position)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty, cannot deleted" << endl;
        return;
    }

    // single Node present
    else if (position == 1)
    {
        Node *stop = tail;

        while (1)
        {
            if (tail->next != stop)
            {
                Node *temp = tail;

                tail = tail->next;

                temp->next = NULL;
                delete temp;
            }
            else
            {
                tail->next = tail;
                break;
            }
        }
    }

    // non-empty list
    else
    {
        Node *prev = tail;
        while (tail->next != tail)
        {
            Node *curr = prev->next;
            Node *fw = prev->next;
            curr = fw;

            int cnt = 1;
            while (cnt < position - 1)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }

            prev->next = curr->next;
            if (tail == curr)
            {
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
            prev = prev->next;
        }
    }
}

void printCLL(Node *tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{

    Node *tail = NULL;
    Node *head = NULL;

    int nodeCount;
    cout << "How many Student want to take part in election : ";
    cin >> nodeCount;

    int i = 1;
    while(nodeCount != 0)
    {
        string name;
        cout << "Enter Name of Student " << i << " : ";
        cin >> name;
        insertNode(tail, name);
        nodeCount--;
        i++;
    }
    printCLL(tail);

    cout << "Enter Position Number Where you want to start deleting : ";
    int position;
    cin >> position;

    deletePostion(tail, position);
    printCLL(tail);

    return 0;
}