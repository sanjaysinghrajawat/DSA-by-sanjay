#include <iostream>
using namespace std;

int divide(int divident, int divisor)
{
    int s = 0;
    int e = std::abs(divident);
    int mid = s + (e - s) / 2;
    int ans = 1;

    while (s <= e)
    {
        if (std::abs(mid * divisor) == std::abs(divident))
        {
            ans = mid;
            break;
        }

        // left search
        if (std::abs(mid * divisor) > std::abs(divident))
        {
            e = mid - 1;
        }

        // right search
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    if ((divisor < 0 && divident < 0) || (divident > 0 && divisor > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{

    int divident = 22;
    int divisor = 7;

    double ans = divide(divident, divisor);

    cout << "Result is " << ans << endl;

    double step = 0.1;
    for (int i = 0; i < 4; i++)
    {
        for (double j = ans; j * divisor <= divident; j = j + step)
        {
            ans = j;
        }
        step = step / 10;
    }
    cout << "Final Result is " << ans << endl;

    return 0;
}