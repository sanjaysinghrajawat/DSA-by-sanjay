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

int main()
{
    cout << "Enter Name : ";
    char name[50];
    cin.getline(name, 50);

    cout << "Length of Name is " << getLength(name) << endl;

    return 0;
}