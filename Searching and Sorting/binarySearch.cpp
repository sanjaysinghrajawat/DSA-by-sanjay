#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[] = {10,12,14,15,16,18};

    int size = sizeof(arr)/sizeof(int);
    // cout << size;

    cout << binarySearch(arr, size, 10) << endl;

    return 0;
}