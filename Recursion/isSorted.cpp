#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int& n, int &i)
{
    if (i == n-1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return isSorted(arr, n, ++i);
}

int main()
{
    int empid[] = {1,2,3,1};
    int salary[] = {200, 900, 500, 900, 800};
    int n = sizeof(empid) / sizeof(int);

    int i = 0;
    cout << isSorted(empid, n, i);

    return 0;
}
