#include <iostream>
#include <vector>
using namespace std;

int oddOccurring(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // single element
        if (s == e)
        {
            return s;
        }

        // mid is even
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                // left wale part me hai
                // right me search krna hoga
                s = mid + 2;
            }
            else
            {
                // right wale part me hai
                //  left me search krna hoga
                e = mid;
                // e = mid --> mid bhi toh answer ho skta hai
            }
        }

        // mid is odd
        else
        {
            if(arr[mid] == arr[mid+1])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{

    vector<int> arr{1,1,2,2,3,3,4};

    int ans = oddOccurring(arr);

    cout << "Index is " << ans << endl;
    cout << "Value is " << arr[ans] << endl;
    return 0;
}