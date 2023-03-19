#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;

    for(int i=0; i<arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    cout << "Enter Size of Array : ";
    int n;
    cin >> n;

    vector<int> num(5);

    cout << "Enter Element in Array " << endl;
    for(int i=0; i<num.size(); i++)
    {
        cin >> num[i];
    }

    cout << "Unique Element is " << findUnique(num);

    return 0;
}