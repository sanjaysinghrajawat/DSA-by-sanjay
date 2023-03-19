#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {10, 30, 40, 60};
    int size_arr = 4;
    int sum = 80;

    for (int i = 0; i < size_arr; i++)
    {
        int element1 = arr[i];

        for (int j = i + 1; j < size_arr; j++)
        {
            int element2 = arr[j];

            for (int k = j + 1; k < size_arr; k++)
            {
                int element3 = arr[k];

                if (element1 + element2 + element3 == sum)
                {
                    cout << "(" << element1 << ", " << element2 << ", " << element3 << ")" << endl;
                }
            }
        }
    }

    return 0;
}