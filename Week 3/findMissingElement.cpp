#include <iostream>
using namespace std;

void findMissing(int *arr, int size)
{
    // visited method
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i])-1;
        
        if (arr[index] > 0)
        {
            arr[index] *= -1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // all +ve integer are missing
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 3, 5, 3, 4};

    findMissing(arr, 5);

    return 0;
}