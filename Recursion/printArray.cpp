#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    if (size == 0)
        return;

    cout << arr[0] << " ";
    printArr(arr + 1, size - 1);
}

int main()
{
    int num[5] = {3,4,65,73,3};
    printArr(num, 5);
    return 0;
}