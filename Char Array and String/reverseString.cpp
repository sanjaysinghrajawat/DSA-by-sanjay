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
void reverseString(char ch[])
{
    int s = 0;
    int e = getLength(ch)-1;

    while(s<e)
    {
        swap(ch[s], ch[e]);
        s++;
        e--;
    }
}


int main()
{
    cout << "Enter String : ";
    char ch[100];
    cin >> ch;

    reverseString(ch);
    cout << ch << endl;

    return 0;
}