#include <iostream>
#include<math.h>
using namespace std;


int decimalToBinary_Method1(int num)
{
    int reverse = 0;
    // int bit = 0;
    int i = 0;

    while (num > 0)
    {
        int bit = num % 2;
        // cout << bit << " ";
        reverse = (bit * pow(10, i++)) + reverse;
        num /= 2;
    }
    return reverse;    
}
int decimalToBinary_Method2(int num)
{
    int reverse = 0;
    int i = 0;

    while( num != 0)
    {
        int bit = num & 1;
        reverse = (bit * pow(10, i++)) + reverse;
        num = num >> 1;
    }
    return reverse;
}


int main()
{
    // int binary = decimalToBinary_Method1(4);
    // cout << binary;
    cout << decimalToBinary_Method2(4);

    return 0;
}