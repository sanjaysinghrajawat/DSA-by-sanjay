#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4};
    vector<int> vector2;

    cout << vector1.size() << endl;
    cout << vector1.capacity() << endl;

    cout << vector2.size() << endl;
    cout << vector2.capacity() << endl;

    // add element in vector
    vector1.push_back(5);
    vector1.push_back(6);

    // printing vector
    for(int i=0; i<vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;

    // removing element from vector
    vector1.pop_back();

    for(int i=0; i<vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    
    // checking capacity of vector 1
    cout << vector1.capacity() << endl;

    // short - print vector
    for(int i : vector1){
        cout << i << " ";
    }
    cout << endl;

    // Accessing Element from vector
    cout << "Element at index 0 is " << vector1.at(0) << endl;
    cout << "Element at index 1 is " << vector1[1] << endl;

    

    return 0;
}