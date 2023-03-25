#include <iostream>
#include <string>
using namespace std;

// exclude 1st than include
void printSubsequence(string str, string output, int i)
{
    // base case
    if(i >= str.length())
    {
        cout << output << endl;
        return;
    }
    // exclude
    printSubsequence(str, output, i+1);

    // include
    output.push_back(str[i]);
    printSubsequence(str, output, i+1);

}

int main()
{
    string str = "xy";
    string output = "";

    int i = 0;
    printSubsequence(str, output, i);
    
    return 0;
}
