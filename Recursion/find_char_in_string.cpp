#include <iostream>
#include <string>
using namespace std;

bool findChar(string& str, int& n, char& key, int i)
{
    if (i >= n)
        return false;

    if (str[i] == key)
        return true;

    return findChar(str, n, key, i+1);
}

int main()
{
    string name = "sanjay";
    int n = name.length();
    char key = 'b';

    bool found = findChar(name, n, key, 0);

    if (found)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}