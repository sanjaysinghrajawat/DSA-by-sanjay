#include <iostream>
using namespace std;
int main()
{
    char name[10] = "sanjay";
    char * cptr = &name[0];

    cout << name << endl;
    cout << &name << endl;
    cout << *(name+3) << endl;
    cout << cptr << endl;
    cout << &cptr << endl;
    cout << *(cptr+3) << endl;
    cout << cptr+2 << endl;
    cout << *cptr << endl;
    cout << cptr+8 << endl;
    

    return 0;
}