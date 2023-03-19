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

void toUpperCase(char *ch)
{
    for (int i = 0; i < getLength(ch); i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }
}
void toLowerCase(char *ch)
{
    for (int i = 0; i < getLength(ch); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
    }
}

int main()
{
    char name[50];
    char name1[50];

    cout << "Enter Lower Case String : ";
    cin >> name;
    cout << "Enter Upper Case String : ";
    cin >> name1;

    toUpperCase(name);
    toLowerCase(name1);

    cout << name << endl;
    cout << name1 << endl;
    return 0;
}