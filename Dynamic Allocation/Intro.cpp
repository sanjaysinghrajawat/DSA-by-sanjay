#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';

    cout << "Size of ch is " << sizeof(ch) << endl;

    char *ptr = &ch;

    cout << "Size of Pointer of char is " << sizeof(ptr) << endl;

    // Dynamic Allocation
    char *name = new char;
    *name = 's';

    cout << "Name char is " << name << endl;

    delete name;
    return 0;
}
