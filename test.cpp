#include <iostream>
#include <vector>
using namespace std;

vector<int> sortEmp(int empid[], int salary[], int n)
{
    vector<int> ans;
    bool swapped;

    int outerIteration = 0;
    int innerIteration = 0;
    for (int i = 0; i < n - 1; i++)
    {
        outerIteration++;
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            innerIteration++;
            if (salary[j] < salary[j + 1] || (salary[j] == salary[j + 1] && empid[j] < empid[j + 1]))
            {
                swap(empid[j], empid[j + 1]);
                swap(salary[j], salary[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(empid[i]);
    }
    cout << "Outer Iteration : " << outerIteration << endl;
    cout << "Inner Iteration : " << innerIteration << endl;
    return ans;
}

int main()
{
    int empid[] = {1, 4, 9, 6, 9};
    int salary[] = {200, 900, 500, 900, 800};
    int n = sizeof(empid) / sizeof(int);

    vector<int> ans = sortEmp(empid, salary, n);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
