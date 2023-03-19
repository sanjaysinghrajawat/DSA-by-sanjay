#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        // Step A : fetching element
        int temp = arr[i];

        // Step B : compare with previous element
        int j = i - 1;

        while (j >= 0)
        {
            // Step C : Shifting element
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        // Step D : Copying
        arr[j+1] = temp;
    }
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
    insertionSort(arr, 7);
    printArr(arr, 7);

    return 0;
}