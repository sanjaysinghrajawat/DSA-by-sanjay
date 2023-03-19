#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        bool swapped  = false;              // swapped for more optimize
        for (int j = 0; j < size - i; j++) // j < size-1 --> last part of array is getting sorter
        {
            count++;
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
    cout << "Iteration is " << count << endl;
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {5, 8, 1, 6, 0, 1, 3};
    printArr(arr, 7);
    bubbleSort(arr, 7);
    printArr(arr, 7);

    return 0;
}