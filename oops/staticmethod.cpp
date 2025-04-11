#include <iostream>

using namespace std;

class Student
{
    private:
        int grid;
        string name;
        string course;
    public:

    static string school;

    void setData(int grid,string name,string course){
        this->grid=grid;
        this->name=name;
        this->course=course;
    }

    void getData(){
        cout << "Grid: " << this->grid <<endl;
        cout << "Name: " << this->name <<endl;
        cout << "Course: " << this->course <<endl;
    }

    Student* getAddress(){
        return this;
    }

};

string Student :: school = "rnw";

int main()
{
   int size;
   int grid;
        string name;
        string course;

   cout <<"enter size of students:";
   cin >> size;

   Student stu[size];

   for(int i = 0;i < size; i++){
    cout <<"enter Grid ";
    cin >> grid;
    cout <<"enter Name";
    cin >> name;
    cout <<"enter Course";
    cin >> course;

    stu[i].setData(grid,name,course);
   }

   for(int i = 0;i < size; i++){
    stu[i].getData();
    cout << "School :" << Student::school << endl;
   }

    return 0;
}