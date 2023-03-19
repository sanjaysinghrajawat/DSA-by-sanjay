#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int size = 10;
    int key = 4;

    cout << "First Occurence on " << firstOccurence(arr, size, key) << endl;
    cout << "Last Occurence on " << lastOccurence(arr, size, key) << endl;

    cout << "Total Number of occerence " << lastOccurence(arr, size, key) - firstOccurence(arr, size, key) + 1 << endl;

    return 0;
}