#include <iostream>
#include <vector>
using namespace std;

// bubble sort
vector<int> bubble_sortEmp(int empid[], int salary[], int n)
{
    int number_swap = 0;
    int comparsion = 0;

    vector<int> ans;
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            comparsion++;
            if (salary[j] < salary[j + 1] || (salary[j] == salary[j + 1] && empid[j] < empid[j + 1]))
            {
                number_swap++;
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

    cout << "------- Bubble Sort -------" << endl;
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

    bubble_sortEmp(empid, salary, n);

    return 0;
}