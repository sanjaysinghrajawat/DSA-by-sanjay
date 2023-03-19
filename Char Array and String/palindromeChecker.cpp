#include <iostream>
using namespace std;

int getLength(char *ch)
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != 32)
            count++;
    }
    return count;
}

bool palindromeChecker(char *ch)
{
    int s = 0;
    int e = getLength(ch) - 1;

    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    cout << "Palindrome Checker : ";
    char name[50];
    cin >> name;

    if (palindromeChecker(name))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}