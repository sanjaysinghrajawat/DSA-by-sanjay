#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int table_size = 1000;

// Hash function
int hash_func(string key)
{
    int hash_value = 0;
    for (char c : key)
    {
        hash_value = (hash_value * 31 + c) % table_size;
    }
    return hash_value;
}

// Hash table entry
struct Entry
{
    string key;
    int value;
};

// Hash table
class HashTable
{
private:
    vector<Entry> table;

public:
    HashTable()
    {
        table.resize(table_size);
    }

    void insert(string key, int value)
    {
        int index = hash_func(key);

        while (table[index].key != "")
        {
            if (table[index].key == key)
            {
                // Key already exists, update value
                table[index].value = value;
                return;
            }
            index = (index + 1) % table_size;
        }
        // Insert new entry
        table[index] = {key, value};
    }

    int getByName(string key)
    {
        int value;
        int index = hash_func(key);

        while (table[index].key != "")
        {
            if (table[index].key == key)
            {
                // Key found, return value
                value = table[index].value;
                return value;
            }
            index = (index + 1) % table_size;
        }
        // Key not found
        return -1;
    }
    string getBySeat(int seatNumber)
    {
        for (const auto &entry : table)
        {
            if (entry.value == seatNumber)
            {
                return entry.key;
            }
        }
        // Seat number not found
        return "Passenger not found!";
    }
};

int main()
{
    system("cls");

    HashTable ht;

    int choice;
    string name;
    int seat;
    // int value;

    while (true)
    {
        cout << "1. Insert Passenger" << endl;
        cout << "2. Search Passenger by seat" << endl;
        cout << "3. Search Passenger by name" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Passenger Name : ";
            cin >> name;
            cout << "Enter Seat Number : ";
            cin >> seat;
            ht.insert(name, seat);
            break;

        case 2:
            cout << "Enter Seat Number : ";
            cin >> seat;
            cout << "Passenger is " <<ht.getBySeat(seat) << endl;
            break;

        case 3:
            cout << "Enter Passenger Name : ";
            cin >> name;
            if (ht.getByName(name) != -1)
            {
                cout << "Seat Number is " << ht.getByName(name) << endl;
            }
            else
            {
                cout << "Passenger not found!" << endl;
            }
            break;

        case 4:
            exit(1);
            // break;
        }
    }
    return 0;
}
