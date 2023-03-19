#include <iostream>
using namespace std;

// Linear Search
bool findKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)

            {
                return true;
            }
        }
    }
    return false;
}

// Max number
int getMax(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

// Minimum Number
int getMin(int arr[][3], int row, int col)
{
    int mini = INT32_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

// Transpose of Matrix/ 2d array
void transpose(int arr[][3], int transposeArr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
    }
}

int main()
{
    // initializing 2D array
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Row Sum
    int row_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            row_sum += arr[i][j];
        }
        cout << "Sum is " << row_sum << endl;
    }

    // Column Wise sum
    int col_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            col_sum += arr[j][i];
        }
        cout << "col Sum is " << col_sum << endl;
    }

    // Linear Search
    if (findKey(arr, 3, 3, 12))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    // Max and Min in 2D array
    cout << "Max is " << getMax(arr, 3, 3) << endl;
    cout << "Min is " << getMin(arr, 3, 3) << endl;

    // create transposeArr
    int transposeArr[3][3];
    // Transpose
    transpose(arr, transposeArr, 3, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposeArr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
