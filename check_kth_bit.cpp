#include <iostream>
using namespace std;

// check k-th bit from left shifting
bool checkKthBit(int num, int position)
{
    if ((num & (1 << (position - 1))) != 0)
        return 1;
    else
        return 0;
}
// check k-th bit from right shifting
bool checkKthBit1(int num, int position)
{
    if ((num >> (position - 1)) & 1 == 1)
        return 1;
    else
        return 0;
}

int main()
{

    bool kthBit = checkKthBit(5, 3);
    if (kthBit)
        cout << "Present" << endl;
    else
        cout << "Absent" << endl;

        
    // *************************************
    bool kthBit1 = checkKthBit1(5, 2);
    if (kthBit1)
        cout << "Present" << endl;
    else
        cout << "Absent" << endl;

    return 0;
}