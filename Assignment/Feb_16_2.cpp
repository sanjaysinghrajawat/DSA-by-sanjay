#include <iostream>
#include <vector>
using namespace std;

void eqution(int num)
{
    num = num * (num + 1) / 2;
    int count = 1;
    cout << num << " " << count << endl;
    count++;
}

void iterative(int num)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i <= num; i++)
    {
        count++;
        sum += i;
    }
    cout << sum << " " << count << endl;
}

int recursive(int num, int &count)
{
    // int count = 0;
    ++count;
    int sum = 0;

    if (num == 0)
    {
        cout << "Recursive Call : " << count  << " ";
        return sum;
    }
    sum = num + recursive(num - 1, count);
    // cout << sum << " " << count << endl;
    return sum;
}

int main()
{
    int rCount = 0;
    cout << recursive(10, rCount);

    // iterative(10);

    // eqution(10);
    return 0;
}