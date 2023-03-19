#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    cout << "Size of Queue before element is " << q.size() << endl;

    q.push(3);
    q.push(7);
    q.push(6);
    q.push(1);

    cout << "Size of Queue after element is " << q.size() << endl;

    q.pop();
    q.pop();

    cout << "Size of Queue after removing is " << q.size() << endl;

    cout << "Front element is " << q.front() << endl;

    cout << "Back element is " << q.back() << endl;

    return 0;
}