#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target, int s, int e)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
            return mid;

        if (target < nums[mid])
            e = mid - 1;

        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int findPivot(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if ((mid + 1 < nums.size()) && (nums.at(mid) > nums.at(mid + 1)))
            return mid;

        if ((mid - 1 >= 0) && (nums.at(mid - 1) > nums.at(mid)))
            return mid - 1;

        else if (nums.at(s) >= nums.at(mid))
            e = mid - 1;

        else
            s = mid;

        mid = s + (e - s) / 2;
    }
    return s;
}

int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivot(nums);

    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        // search in part A
        int ans = binarySearch(nums, target, 0, pivotIndex);
        return ans;
    }

    if (pivotIndex + 1 < nums.size() && target >= nums[pivotIndex + 1] && target <= nums[nums.size() - 1])
    {
        // search in part B
        int ans = binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
        return ans;
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Pivot is " << findPivot(nums) << endl;
    cout << "Index at " << search(nums, 0) << endl;

    return 0;
}