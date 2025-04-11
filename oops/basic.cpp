#include <iostream>

using namespace std;

class Student
{
public:
    int grid;
    string name;
    string course;
};

int main()
{
    Student s1, s2, s3;
    s1.grid = 1234;
    s1.name = "yash";
    s1.course = "fsd";
    s2.grid = 1234;
    s2.name = "darius";
    s2.course = "fsd";

    cout << "Name :" << s1.name << endl;
    cout << "Grid :" << s1.grid << endl;
    cout << "Course :" << s1.course << endl << endl;

    cout << "Name :" << s2.name << endl;
    cout << "Grid :" << s2.grid << endl;
    cout << "Course :" << s2.course << endl << endl;
    
    

    return 0;
}