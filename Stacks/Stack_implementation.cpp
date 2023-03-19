#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if(top >=0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if(top == -1)
        {
            cout << "Empyt Stack" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            cout << "Stack is Empty" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.peek() << endl;

    st.pop();
    st.pop();

    cout << st.peek() << endl;

    cout << st.isEmpty() << endl;
    return 0;
}