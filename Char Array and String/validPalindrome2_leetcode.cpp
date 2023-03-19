#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str, int s, int e)
{
    while(s<e)
    {
        if(str[s] == str[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string str)
{
    int s = 0;
    int e = str.length()-1;

    while(s<=e)
    {
        if(str[s] == str[e])
        {
            s++;
            e--;   
        }
        else if(str[s] != str[e])
        {
            return checkPalindrome(str, s+1, e) || checkPalindrome(str, s, e-1);
        }
    }
    return true;
}

int main()
{
    cout << validPalindrome("abcaa");

    return 0;
}