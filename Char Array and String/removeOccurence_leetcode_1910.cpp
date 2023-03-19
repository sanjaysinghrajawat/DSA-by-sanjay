#include <iostream>
#include <string>
using namespace std;

string removeOccurence(string s, string part)
{
    int position = s.find(part);

    while (position != string::npos)
    {
        s.erase(position, part.length());
        position = s.find(part);
    }
    return s;
}

int main()
{
    cout << removeOccurence("abababccba", "ba");

    return 0;
}