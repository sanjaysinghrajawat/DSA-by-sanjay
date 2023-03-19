#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int row = v.size();    // size of row
    int col = v[0].size(); // size of col

    for (int i = 0; i < col; i++)
    {
        // top to bottom --> even number of col
        if ((i & 1) == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << v[j][i] << " ";
            }
        }
        else
        {
            // bottom to top
            for(int j=row-1; j>=0; j--)
            {
                cout << v[j][i] << " ";
            }
        }
    }

    return 0;
}