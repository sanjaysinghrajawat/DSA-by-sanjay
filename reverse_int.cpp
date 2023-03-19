#include <iostream>
using namespace std;

int reverseInt(int num)
{
    int ans = 0;
    int digit = 0;

    while (num != 0)
    {
        if (ans > INT32_MAX / 10 || ans < INT32_MIN / 10)
        {
            return 0;
        }
        digit = num % 10;
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    return ans;
}

int main()
{
    cout << reverseInt(123) << endl;

    return 0;
}