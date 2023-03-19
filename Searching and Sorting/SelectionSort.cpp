#include <iostream>
using namespace std;

void selectionSort(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            count++;
            if (arr[i] > arr[j])
            {
                cout << arr[i] << " swap with " << arr[j] << endl;
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Iteration count " << count << endl;
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

    int arr[] = {5,4,3,2,1};
    printArr(arr, 5);
    selectionSort(arr, 5);
    printArr(arr, 5);

    return 0;
}