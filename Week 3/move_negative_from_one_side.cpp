#include <iostream>
#include <vector>
using namespace std;

void moveNegative(int *arr, int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        if (arr[s] < 0)
        {
            s++;
        }
        else if (arr[s] > 0 || arr[s] == 0)
        {
            swap(arr[s], arr[e]);
            e--;
        }
    }
}

int main()
{
    int arr[] = {-3, 2, 0, 6, -5, 1, -1};

    moveNegative(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << i[arr] << " ";
    }

    return 0;
}