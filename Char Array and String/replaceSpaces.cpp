#include <iostream>
using namespace std;

int getLength(char *ch)
{
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++)
    {
        if(ch[i] != 32)
            count++;
    }
    return count;
}

void replace_all_space(char *ch)
{
    for(int i=0; i<getLength(ch); i++)
    {
        if(ch[i] == 32)
        {
            ch[i] = '@';
        }
    }
}


int main()
{
    cout << "Enter String : ";
    char ch[100];
    cin.getline(ch, 100);

    replace_all_space(ch);
    cout << ch << endl;

    return 0;
}