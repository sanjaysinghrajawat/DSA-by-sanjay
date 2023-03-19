#include <iostream>
using namespace std;

bool two_D_binarySearch(int arr[][4], int row, int col, int key)
{
    int s = 0;
    int e = row*col-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int element = arr[rowIndex][colIndex];

        if(element == key)
            return true;
        
        if(element < key)
            s = mid + 1;
        
        else
            e = mid - 1;
        
        mid = s + (e - s)/2;
    }   
    return false;
}

int main()
{
    int arr[4][4] = {
        {1, 3, 5, 7},
        {9, 11, 13, 15},
        {17, 19, 21, 23},
        {25, 27, 29, 31},
    };

    bool ans = two_D_binarySearch(arr, 4, 4, 2);

    if(ans)
        cout << "Found" << endl;
    else
        cout << "Absent" << endl;

    return 0;
}