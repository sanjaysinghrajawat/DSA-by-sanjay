#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {10, 30, 40, 60, 70, 40};
    int size_arr = 6;
    int sum = 80;

    for(int i=0; i<size_arr; i++)
    {
        int element = arr[i];
        // cout << "We are at " << element << endl;

        for(int j=i+1; j<size_arr; j++)
        {
            // cout << "Pair " << element << " with " << arr[j] << endl;
            // cout << "(" << element << ", " << arr[j] << ")" << endl;
            if(element + arr[j] == sum)
            {
                cout << "Pair is " << element << ", " << arr[j] << endl;
            }
        }
    }

    return 0;
}