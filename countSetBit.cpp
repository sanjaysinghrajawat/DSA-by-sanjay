#include <iostream>
using namespace std;

int countSetBit(int num)
{
    int count = 0;

    while (num != 0)
    {
        if(num & 1)
        {
            count++;
            cout << "Set bit is " << count << endl;
        }
        num = num >> 1;
    }
    return count;    
}

int main()
{
    cout << countSetBit(-1) << endl;
    return 0;
}