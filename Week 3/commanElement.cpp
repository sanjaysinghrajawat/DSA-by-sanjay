#include <iostream>
#include <vector>
using namespace std;

vector<int> commanElement3Array(int *arr1, int *arr2, int *arr3, int size1)
{
    int i = 0, j = 0, k = 0;
    vector<int> ans;

    while (i < size1)
    {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.push_back(arr1[i]);
            j++;
            i++;
            k++;
        }

        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return ans;
}

int main()
{
    int a1[] = {2,4,6,8,10};
    int a2[] = {6,8,10,12};
    int a3[] = {2,6,8,10,12,13,56};

    vector<int> ans = commanElement3Array(a1,a2,a3,4);
    for(int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}