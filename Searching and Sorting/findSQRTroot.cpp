#include <iostream>
using namespace std;

double findSQRT(int n)
{
    int s = 0;
    int e = n;
    double mid = s + (e - s) / 2;
    double ans = -1;

    while (s <= e)
    {
        if (mid * mid == n)
            return mid;

        if (mid * mid > n)
            e = mid - 1;

        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    double ans = findSQRT(n);

    cout << "Enter floating number after answer : ";
    int pre;
    cin >> pre;

    double step = 0.1;

    // add step to ans
    for (int i = 0; i < pre; i++)
    {
        // calculating ans
        for (double j = ans; j * j <= n; j = j + step)
        {
            ans = j;
        }
        step = step / 10;
    }

    cout << "Answer is " << ans << endl;
    return 0;
}