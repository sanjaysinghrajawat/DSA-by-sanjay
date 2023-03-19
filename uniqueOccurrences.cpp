#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int> arr)
{
    int size = arr.size();
    vector<int> ans;

    sort(arr.begin(), arr.end());
    int i = 0;

    while (i < size)
    {
        int count = 1; // count = 1 --> becasue every element present at least onces

        cout << "element = " << arr[i] << endl;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(count);
        i = i + count;
        cout << "Count = " << count << endl;
    }

    // Now checking in ans array
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool match = uniqueOccurrences(arr);

    if (match)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}