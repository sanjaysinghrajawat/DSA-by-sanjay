#include <iostream>
using namespace std;

int findPivot(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] > arr[mid + 1] && (mid + 1 < size - 1))
            return mid;

        if (arr[mid - 1] > arr[mid] && (mid - 1 >= 0))
            return mid - 1;

        else if (arr[start] <= arr[mid])
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int arr[] = {1,2,3, 4, 5, 6, 7, 8, 9,0};
    cout << findPivot(arr, 10) << endl;
    return 0;
}