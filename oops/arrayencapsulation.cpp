#include <iostream>

using namespace std;

class Student
{
    private:
        int grid;
        string name;
        string course;
    public:


    void setData(int grid,string name,string course){
        this->grid=grid;
        this->name=name;
        this->course=course;
    }

    void getData(){
        cout << "Name:" << this->grid <<endl;
        cout << "Speed:" << this->name <<endl;
        cout << "Name:" << this->course <<endl;
    }

    Student* getAddress(){
        return this;
    }

};

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
    cout <<"enter grid";
    cin >> grid;
    cout <<"enter name";
    cin >> name;
    cout <<"enter course";
    cin >> course;

    stu[i].setData(grid,name,course);
   }

   for(int i = 0;i < size; i++){
    stu[i].getData();
   }

    return 0;
}