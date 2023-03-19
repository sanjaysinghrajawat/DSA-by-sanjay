#include <iostream>
#include <vector>
using namespace std;

vector<int> sprialPrint(vector<vector<int>> &arr)
{
    vector<int> ans;
    // no. of row
    int m = arr.size();

    // no. of col
    int n = arr[0].size();

    int total_element = m * n;

    int starting_row = 0;
    int ending_col = n - 1;
    int ending_row = m - 1;
    int starting_col = 0;

    int count = 0;
    while (count < total_element)
    {
        // print starting Row
        for (int i = starting_col; i <= ending_col && count < total_element; i++)
        {
            ans.push_back(arr[starting_row][i]);
            count++;
        }
        starting_row++;

        // print ending col
        for (int i = starting_row; i <= ending_row && count < total_element; i++)
        {
            ans.push_back(arr[i][ending_col]);
            count++;
        }
        ending_col--;

        // print ending row
        for (int i = ending_col; i >= starting_col && count < total_element; i--)
        {
            ans.push_back(arr[ending_row][i]);
            count++;
        }
        ending_row--;

        // print starting col
        for (int i = ending_row; i >= starting_row && count < total_element; i--)
        {
            ans.push_back(arr[i][starting_col]);
            count++;
        }
        starting_col++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30}};

    vector<int> ans = sprialPrint(arr);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}