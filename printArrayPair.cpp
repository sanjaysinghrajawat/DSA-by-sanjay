#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size_arr = 5;

    for(int i=0; i<size_arr; i++)
    {
        int element = arr[i];
        cout << "We are at " << element << endl;

        for(int j=i+1; j<size_arr; j++)
        {
            cout << "Pair " << element << " with " << arr[j] << endl;
            cout << "(" << element << ", " << arr[j] << ")" << endl;
        }
    }

    return 0;
}