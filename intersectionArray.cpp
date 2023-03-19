#include <iostream>
#include <vector>
using namespace std;


int main()
{
    // Array Intersection
    int arr[] = {1,3,3,5,7,8,9};
    int size_arr = 7;
    int brr[] = {2,4,3,1,8};
    int size_brr = 5;

    vector<int> ans;

    for(int i=0; i<size_arr; i++)
    {
        int element = arr[i];

        for(int j=0; j<size_brr; j++)
        {
            if(element == brr[j])
            {
                // mark
                brr[j] = -1;
                ans.push_back(element);
                break;
            }
        }
    }

    // print array
    for(auto i : ans)
    {
        cout << i << " ";
    }

    
    
    return 0;
}