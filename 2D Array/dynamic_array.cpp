#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // vector with same element and define row,col
    vector<vector<int> > v(3, vector<int>(4, -1));

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}