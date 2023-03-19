#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Extreme Print array

    int arr[] = {1, 2, 4, 6, 8};
    int size = 5;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }

    return 0;
}