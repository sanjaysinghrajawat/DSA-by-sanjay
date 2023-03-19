#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// custom comparator
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> arr{2,6,8,6,3,1,3,5,7,9,0,6};

    sort(arr.begin(), arr.end(), cmp);

    for(auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}