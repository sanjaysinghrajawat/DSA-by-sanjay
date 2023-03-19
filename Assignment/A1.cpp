#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int maxi = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int getMin(int arr[], int size)
{
    int mini = getMax(arr, 4);
    for (int i = 0; i < size; i++)
    {
        if (mini < arr[i] || arr[i] != 0)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int getRemainder(int maxi, int mini)
{
    int remain = maxi % mini;
    return remain;
}

int main()
{
    int arr[] = {10, 19, 28, 6};

    int iteration = 0;

    int i = 0;
    while ((getMax(arr, 4)) != 0)
    {

        int maxi = getMax(arr, 4);
        int mini = getMin(arr, 4);
        int remain = getRemainder(maxi, mini);

        for (int j = 0; j < 4; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;

        if (arr[i] == maxi)
        {
            arr[i] = remain;
            i = 0;
        }

        else
        {
            i++;
        }
        iteration++;
    }

    for (int j = 0; j < 4; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    cout << "Iteration = " << iteration << endl;

    return 0;
}