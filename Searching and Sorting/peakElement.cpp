#include <iostream>
using namespace std;

int peakElement(int *arr, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[] = {2,5,6,7,6,1,0};

    cout << "Index of Peak Element is " << peakElement(arr, 6) <<endl;

    return 0;
}