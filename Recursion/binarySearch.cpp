#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid+1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid-1, key);
    }
}

int main()
{
    int empid[] = {1, 2, 3, 1};
    int salary[] = {200, 400, 500, 700, 800};
    int n = sizeof(empid) / sizeof(int);

    cout << binarySearch(salary, 0, n, 700);
    return 0;
}
