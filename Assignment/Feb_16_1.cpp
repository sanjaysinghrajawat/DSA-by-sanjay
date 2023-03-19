#include <iostream>
#include <vector>
using namespace std;

vector<int> materChef(vector<int> arr1, vector<int> arr2)
{
    int i = 0;
    int j = 0;
    int chef1 = 0;
    int chef2 = 0;
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] > 100 || arr2[i] > 100)
        {
            cout << "Input is Invalid" << endl;
            exit(1);
        }
    }

    while (i < arr1.size() || j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            chef1++;
            i++;
            j++;
        }
        else
        {
            chef2++;
            i++;
            j++;
        }
    }
    ans.push_back(chef1);
    ans.push_back(chef2);
    return ans;
}

int main()
{
    vector<int> arr1{27, 48, 70};
    vector<int> arr2{89, 26, 7};

    vector<int> ans = materChef(arr1, arr2);

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}