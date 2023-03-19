#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Union of 2 Array
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size_arr = 5;
    int brr[] = {2, 4, 6, 8};
    int size_brr = 4;

    vector<int> ans;

    // Intersection of array --> because we does not want duplicate element
    for (int i = 0; i < size_arr; i++)
    {
        int element = arr[i];

        for (int j = 0; j < size_brr; j++)
        {
            if (element == brr[j])
            {
                // mark
                brr[j] = -1;
                // ans.push_back(element);
                break;
            }
        }
    }

    for (int i = 0; i < size_arr; i++)
    {
        if (arr[i] != -1)
        {
            ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < size_brr; i++)
    {
        if (brr[i] != -1)
        {
            ans.push_back(brr[i]);
        }
    }

    // print ans array
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}