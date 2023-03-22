#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
        return;

    // recursive call
    cout << n << " "; 
    printCounting(n - 1);
}

int main()
{
    int n;
    cout << "Enter a Number :";
    cin >> n;

    printCounting(n);

    return 0;
}