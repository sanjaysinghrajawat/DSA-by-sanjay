#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int num)
{
    int digit = 0;
    int ans = 0;
    int i = 0;

    while (num != 0)
    {
        digit = num & 1;
        ans = ans + digit * pow(2, i++);
        num /= 10;
        // i++;
    }
    return ans;
}

int main()
{
    cout << binaryToDecimal(1010);
    return 0;
}