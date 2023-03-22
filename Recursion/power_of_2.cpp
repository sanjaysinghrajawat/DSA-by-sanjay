#include <iostream>
using namespace std;

int powerOfTwo(int n)
{
    if (n == 0)
        return 1;

    return 2 * powerOfTwo(n - 1);
}

int main()
{
    int n;
    cout << "Enter power of 2 : ";
    cin >> n;

    int ans = powerOfTwo(n);
    cout << ans << endl;

    return 0;
}