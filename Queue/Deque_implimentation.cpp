#include <iostream>
using namespace std;

class Deque
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push_front(int data)
    {
        if (isFull())
        {
            cout << "Deque is Full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            // arr[front] = data;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            // arr[front] = data;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }
    void push_back(int data)
    {
        if (isFull())
        {
            cout << "Deque is Full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            // arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            // arr[rear] = data;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pop_front()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
        }
        // single element
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1 && rear != 0)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        // arr[front] = -1;
    }
    void pop_back()
    {
        if (isEmpty())
        {
            cout << "Deque is Empty" << endl;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0 && front != size - 1)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        // arr[rear] = -1;
    }

    bool isFull()
    {
        if (((front == 0 && rear == size - 1)) || (rear == (front - 1) % (size - 1)) && (front != 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getFront()
    {
        return arr[front];
    }
    int getBack()
    {
        return arr[rear];
    }
};

int main()
{
    Deque d(4);

    cout << d.isEmpty() << endl;
    cout << d.isFull() << endl;

    d.push_front(5);
    d.push_front(22);
    d.push_back(10);
    d.push_back(15);

    cout << d.isEmpty() << endl;
    cout << d.isFull() << endl;

    cout << d.getFront() << endl;
    cout << d.getBack() << endl;

    d.pop_front();
    d.pop_back();

    cout << d.getFront() << endl;
    cout << d.getBack() << endl;

    return 0;
}