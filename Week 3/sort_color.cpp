#include <iostream>
using namespace std;

void sortColor(int *arr, int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[s] == 1 && arr[e] == 2)
        {
            e--;
        }
        else if (arr[s] == 1)
        {
            swap(arr[s], arr[e]);
            e--;
        }
        else if (arr[s] == 2)
        {
            swap(arr[s], arr[e]);
            e--;
        }
    }
}

int main()
{

    int arr[] = {2, 0, 1, 0, 0, 1, 0,1, 2, 0};

    sortColor(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}