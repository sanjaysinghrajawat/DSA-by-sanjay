#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}

// Optimize and without modifying original array
int findDuplicate1(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        // checking visit
        if (arr[index] < 0)
        {
            return index;
        }

        // visiting mark
        arr[index] *= -1;
    }
    return -1;
}

int findDuplicate2(vector<int> arr)
{

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main()
{
    vector<int> nums = {3, 3, 2, 1};

    cout << "Duplicate is " << findDuplicate(nums) << endl;
    cout << "Duplicate is " << findDuplicate1(nums) << endl;
    cout << "Duplicate is " << findDuplicate2(nums) << endl;
    return 0;
}