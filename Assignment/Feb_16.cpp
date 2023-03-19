#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int count = 0;
    int stepCount = 0;
    for (int i = 1; i < n; i++)
    {
        stepCount++;
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count++;
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout << "Bubble Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Iteration : " << count << endl;
    cout << "Step Count : " << stepCount << endl;
}

void selectionSort(int *arr, int n)
{
    int count = 0;
    int stepCount = 0;
    for (int i = 0; i < n; i++)
    {
        stepCount++;
        int minIndex = i;
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                count++;
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    cout << "Selection Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Iteration : " << count << endl;
    cout << "Step Count : " << stepCount << endl;
}

void insertionSort(int *arr, int n)
{
    int count = 0;
    int stepCount = 0;
    for(int i=1; i<n; i++)
    {
        stepCount++;
        int temp = arr[i];
        int j = i-1;

        while(j>=0)
        {
            if(arr[j] > temp)
            {
                count++;
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
    cout << "Insertion Sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Iteration : " << count << endl;
    cout << "Step Count : " << stepCount << endl;
}

int main()
{
    // string arr[] = {"virat", "sachin", "dhoni", "jadeja", "sky"};
    int arr[] = {9,85,56,20,0,1,5,77,96, 5, 1, 0, 3};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);

    return 0;
}