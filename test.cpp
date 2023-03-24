#include <iostream>
#include <string>
using namespace std;

void printDigit(int n)
{
    if(n == 0) return;

    printDigit(n/10);

    int digit = n % 10;
    cout << digit << endl;
}

int main()
{
    int n = 456;

    printDigit(n);

    return 0;
}