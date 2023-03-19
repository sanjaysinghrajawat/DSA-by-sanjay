#include <iostream>
#include <string>
using namespace std;

string removeDuplicate(string str)
{
    string newStr = "";

    for(int i=0; i<str.length(); i++)
    {
        if(newStr.length() > 0 && newStr[newStr.length()-1] == str[i])
        {
            newStr.pop_back();
        }
        else
        {
            newStr.push_back(str[i]);
        }
    }
    return newStr;
}

int main()
{

    cout << removeDuplicate("abbaca") << endl;

    return 0;
}