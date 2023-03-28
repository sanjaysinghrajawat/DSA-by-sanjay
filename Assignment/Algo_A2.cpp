#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    double height;
};

bool compareHeight(Student &s1, Student &s2)
{
    return s1.height < s2.height;
}

void sortStudentsAndWriteToFile(vector<Student> &students, const string &filename)
{
    vector<Student> sortedStudents = students;
    sort(sortedStudents.begin(), sortedStudents.end(), compareHeight);

    ofstream outFile(filename);
    if (outFile.is_open())
    {
        for (auto &student : sortedStudents)
        {
            outFile << student.name << " " << student.height << "\n";
        }
        outFile.close();
    }
    else
    {
        cout << "Unable to open file.";
        return;
    }
}

vector<string> findTallStudentsLinear(vector<Student> &students, double minHeight)
{
    int iteration = 0;
    vector<string> tallStudents;
    for (auto &student : students)
    {
        iteration++;
        if (student.height >= minHeight)
        {
            tallStudents.push_back(student.name);
        }
    }
    cout << "Iteration = " << iteration << endl;
    return tallStudents;
}

vector<string> findTallStudentsBinary(vector<Student> &students, double minHeight)
{
    // Sort the students by height in ascending order
    vector<Student> sortedStudents = students;
    sort(sortedStudents.begin(), sortedStudents.end(), compareHeight);

    int iteration = 0;
    vector<string> tallStudents;
    int left = 0;
    int right = sortedStudents.size() - 1;
    while (left <= right)
    {
        iteration++;
        int mid = (left + right) / 2;
        if (sortedStudents[mid].height >= minHeight)
        {
            tallStudents.push_back(sortedStudents[mid].name);
            int i = mid - 1;
            while (i >= left && sortedStudents[i].height >= minHeight)
            {
                tallStudents.push_back(sortedStudents[i].name);
                i--;
            }
            i = mid + 1;
            while (i <= right && sortedStudents[i].height >= minHeight)
            {
                tallStudents.push_back(sortedStudents[i].name);
                i++;
            }
            break;
        }
        else if (sortedStudents[mid].height < minHeight)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << "Iteration = " << iteration << endl;
    return tallStudents;
}

int main()
{
    vector<Student> students;
    string name;
    double height;

    cout << "Enter student name and height (separated by a space), enter 'done' to finish:\n";
    while (true)
    {
        cin >> name;
        if (name == "done")
            break;
        cin >> height;
        students.push_back({name, height});
    }

    sortStudentsAndWriteToFile(students, "student.txt");

    double minHeight = 5.0;

    vector<string> tallStudentsLinear = findTallStudentsLinear(students, minHeight);

    if (tallStudentsLinear.size() > 0)
    {
        cout << "The following student(s) have a height of " << minHeight << " feet or more (linear search):\n";
        for (auto &student : tallStudentsLinear)
        {
            cout << student << "\n";
        }
    }
    else
    {
        cout << "No students have a height of " << minHeight << " feet or more (linear search).\n";
    }

    vector<string> tallStudentsBinary = findTallStudentsBinary(students, minHeight);

    if (tallStudentsBinary.size() > 0)
    {
        cout << "The following student(s) have a height of " << minHeight << " feet or more (binary search):\n";
        for (auto &student : tallStudentsBinary)
        {
            cout << student << "\n";
        }
    }
    else
    {
        cout << "No students have a height of " << minHeight << " feet or more (linear search).\n";
    }
    return 0;
}