#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int qfront;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    int front()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    int back()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[rear-1];
        }
    }
    bool isEmpty()
    {
        if(qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int data)
    {
        if(rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if(qfront == rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            arr[qfront] = -1;
            qfront = (qfront + 1);

            if(qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
        }
    }
};

int main()
{

    Queue q(5);

    cout << q.isEmpty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();

    q.push(3);
    q.push(5);
    q.push(4);
    q.push(8);
    q.push(1);
    q.pop();
    q.push(1);
    q.pop();
    q.push(1);
    // q.pop();

    cout << q.isEmpty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    return 0;
}