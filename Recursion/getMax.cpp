#include <iostream>
using namespace std;

int getMax(int arr[], int n, int& maxi)
{
    if (n == 0)
        return maxi;

    // check every value of array
    if (arr[0] > maxi)
    {
        maxi = arr[0];
    }

    getMax(arr + 1, n - 1, maxi);
    return maxi;
}

int main()
{
    int arr[] = {5, 2, 6, 5, -45, 23, 11, 2, 0, -1, -3};
    int n = sizeof(arr) / sizeof(int);

    int maxi = arr[0];
    int ans = getMax(arr, n, maxi);
    cout << ans << endl;

    return 0;
}