#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
    int id,m1,m2,m3;
    float avg;
    string name;
    
    public:
    Student(){
        this->id=0;
        this->name="";
        this->m1=0;
        this->m2=0;
        this->m3=0;
        this->avg=0;
    }
    void addStudent(int id,string name){
        this->id = id;
        this->name=name;

    };
    void addMarks(int m1,int m2,int m3){
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
        this->avg=(m1 + m2 + m3) / 3;

    };

   

    int getstudentId(){
        return this->id;
    }

    int getavg(){
        return this->avg;
    }
    virtual void getData(){
        cout <<"\n----------------------------\n";
        cout << "id:" << this->id << endl;
        cout << "Name:" << this->name << endl;
        if( this->avg == 0){
            cout << "Marks not Inserted:" << endl;
        }
        else 
            cout <<"Avg:" << this->avg << endl;
           
      
        cout <<"----------------------------\n";

    }
};

class Gradedstudent:public Student{
    public:
    void calculategrade(){
        if(getavg() >= 90 ){
            cout << "A" << endl;
        }
        else if(getavg() > 80 ){
            cout << "B" << endl;
        }
        else if(getavg() > 70 ){
            cout << "C" << endl;
        }
        else if(getavg() >= 60 ){
            cout << "D" << endl;
        }
        else{
            cout <<"F" << endl;
        }


    }
    void getData() override
    
        {
        cout <<"\n----------------------------\n";
        cout << "id:" << this->id << endl;
        cout << "Name:" << this->name << endl;
        if( this->avg == 0){
            cout << "Marks not Inserted:" << endl;
        }
        else 
          {  cout <<"Avg:" << this->avg << endl;
            calculategrade();}
        cout <<"----------------------------\n";

    }
 

};

int main(){


    Gradedstudent stu[7];
    int slot = 0;
    int choice;


    do
    {
        cout <<"Enter 1 to Enter Student Data:" << endl;
        cout <<"Enter 2 to Enter Student Marks:" << endl;
        cout <<"Enter 3 to view Student Data:" << endl;
        cout <<"Enter 4 Calculate Grade:" << endl;
        cout <<"Enter Your Choice:" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            {
                int id;
                string name;
                cout <<"Enter Student id:" <<endl;
                cin >>id;
                cin.ignore();
                cout << "Enter Student Name:" << endl;
                getline(cin,name);

                stu[slot].addStudent(id,name);
                slot ++;
                break;
            }
        case 2:
            {
                int id;
                int m1,m2,m3;
                bool flag=0;
                cout <<"Enter Students id you want to insert marks:" << endl;
                cin >>id;
                cout << "Enter Marks of 3 subjects" << endl;
                cin >>m1 >>m2>>m3;
                for(int i = 0;i < slot ; i ++){
                   if( id ==  stu[i].getstudentId()){
                      flag=1;
                      stu[i].addMarks(m1,m2,m3);
                   };

                }
                if (flag =0){
                    cout <<"Enter Correct Student id:";
                    break;
                }


            };
        case 3:
            {
                 for(int i = 0 ; i < slot ; i ++){
                    stu[i].getData();
                 }
                 break;
            }
        case 4:
            {    int id;
                cout <<"Enter students id you want to calculate grade:";
                cin >> id;
                bool flag = true;
                for(int i = 0;i < slot ; i++){
                    
                    if(id == stu[i].getstudentId()){
                        flag = false;
                        stu[i].calculategrade();
                    }
                }
                if (flag == true){
                    cout << "enter proper student id:";
                }
                break;
                
            }
           
        
        default:
            break;
        }
    } while (choice !=0);
    
    return 0;
}