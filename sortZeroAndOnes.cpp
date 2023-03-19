#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 0, 1, 0, 0, 1, 1, 0,1};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (arr.at(start) == 0)
        {
            start++;
        }
        else if (arr.at(start) == 1)
        {
            swap(arr.at(start), arr.at(end));
            end--;
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}