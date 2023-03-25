#include <iostream>
#include <vector>
using namespace std;

// insertion sort
vector<int> insertion_sortEmp(int empid[], int salary[], int n)
{
    int number_swap = 0;
    int comparsion = 0;

    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        int key_empid = empid[i];
        int key_salary = salary[i];
        int j = i - 1;
        while (j >= 0 && (salary[j] < key_salary || (salary[j] == key_salary && empid[j] < key_empid)))
        {
            comparsion++;
            empid[j + 1] = empid[j];
            salary[j + 1] = salary[j];
            j--;
        }
        empid[j + 1] = key_empid;
        salary[j + 1] = key_salary;
        number_swap++;
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(empid[i]);
    }

    cout << "------- Insertion Sort -------" << endl;
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

    insertion_sortEmp(empid, salary, n);

    return 0;
}