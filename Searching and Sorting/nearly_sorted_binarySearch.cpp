#include <iostream>
#include <vector>
using namespace std;

int nearly_sorted_binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (mid - 1 >= s && arr[mid - 1] == key)
        {
            return mid - 1;
        }
        if (mid + 1 <= e && arr[mid + 1] == key)
        {
            return mid + 1;
        }
        if (key > arr[mid])
        {
            // right search
            s = mid + 2;
        }
        else
        {
            // left search
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {10,3,40,20,50,80,70};

    int ans = nearly_sorted_binarySearch(arr, 7, 20);

    cout << "Index is " << ans << endl;


    return 0;
}