#include<iostream>

using namespace std;

class College
{
private:
    int id;
    string name;

public:
    void getData(){
        cout <<"Enter id:" << endl;
        cin >> id;
        cout <<"Enter name:" << endl;
        cin >>name;
    }
    void printData(){
        cout <<this->id << endl;
        cout <<this->name << endl;
    }
};

class Staff:public College{
    private:
        string department;
        int salary;

        public:
    
    void getStaffdata(){
        cout <<"Enter Department:" << endl;
        cin >> department;
        cout <<"Enter Salary:" << endl;
        cin >> salary;
    }
    void printData(){
        cout <<this->department << endl;
        cout <<this->salary << endl;
    }
    
   
};
    



int main(){

    Staff s1;
    s1.getData();
    s1.getStaffdata();
    s1.College::printData();
    return 0;
}