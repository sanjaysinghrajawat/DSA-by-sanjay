#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;

    cout << "Size of stack before inserting element is " << s.size() << endl;

    s.push(10);
    s.push(12);
    s.push(13);

    cout << "Top element is " << s.top() << endl;
    cout << "Size of stack after inserting element is " << s.size() << endl;

    s.pop();
    s.pop();

    cout << "Top element is " << s.top() << endl;
    cout << "Size of stack after removing element is " << s.size() << endl;
    return 0;
}