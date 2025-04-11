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
    Student s1,s2;

    s1.setData(9999,"yash","fsd");
    s1.getData();
    s2.setData(9889,"darius","fsd and ai ml");
    s2.getData();

    cout << s1.getAddress();

 
    
    

    return 0;
}