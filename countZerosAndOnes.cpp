#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // count 0's and 1's
    int arr[] = {1,0,0,1,0,1,1,1,1,0,0,0,1};
    int size = 13;

    int numZero = 0;
    int numOne = 0; 

    for(int i=0; i<size; i++)
    {
        if(arr[i] == 1)
        {
            numOne++;
        }
        if(arr[i] == 0)
        {
            numZero++;
        }
    }
    cout << numZero << endl;
    cout << numOne << endl;
    
    return 0;
}