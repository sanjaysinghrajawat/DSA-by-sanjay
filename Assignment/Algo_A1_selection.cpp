#include <iostream>
#include <vector>
using namespace std;

// selecton sort
vector<int> selection_sortEmp(int empid[], int salary[], int n)
{
    int number_swap = 0;
    int comparsion = 0;

    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            comparsion++;
            if (salary[j] > salary[minIndex] || (salary[j] == salary[minIndex] && empid[j] > empid[minIndex]))
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            number_swap++;
            swap(empid[i], empid[minIndex]);
            swap(salary[i], salary[minIndex]);
        }
        ans.push_back(empid[i]);
    }

    cout << "------- Selection Sort -------" << endl;
    cout << "Number of Swaps : " << number_swap << endl;
    cout << "Number of Comparsions : " << comparsion << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return ans;
}


int main()
{
    int empid[] = {1, 4, 9, 6, 9};
    int salary[] = {200, 900, 500, 900, 800};
    int n = sizeof(empid) / sizeof(int);

    selection_sortEmp(empid, salary, n + 1);

    return 0;
}