#include<iostream>
 #include<vector>
 #include<string>
 
 using namespace std;
 
 class Student{
     private:
     int id;
     string name;
     int marks;
 
     public:
     Student(){}
     Student(int id,string name,int marks){
         this->id=id;
         this->name=name;
         this->marks=marks;
     }
 
     void showData(){ 
         cout <<"\n--------------------------\n";
         cout <<"Id:" << this->id << endl;
         cout <<"Name:" << this->name << endl;
         cout <<"Marks:" <<this->marks << endl;
         cout <<"--------------------------\n";
     }
 
     int getId(){
         return this->id;
     }
 
     int getMarks(){
         return this->marks;
     }
 
     void checkid(int){
 
 
     }
 
 };
 
 int main(){
 
     vector<Student> stu;
 
     int choice;
     int slot;
 
     do
     {
 
         cout <<"1 for Add Student:" << endl;
         cout <<"2 for View Student:" << endl;
         cout <<"3 for Search Student:" << endl;
         cout <<"4 for Remove Student:" << endl;
         cout <<"5 for Display Passed  Student:" << endl;
         cout <<"0 for Exit:" << endl;
         cout <<"Enter your choice:" << endl;
         cin >> choice;
 
         switch (choice)
         {
         case 1:
             {
                 int id;
                 string name;
                 int marks;
                 int n = stu.size();
                 cout <<"Enter id:";
                 cin >> id;
 
                 cin.ignore();
 
                 cout <<"Enter Name:";
                 getline(cin,name);
 
                 cout <<"Enter Marks:";
                 cin >>marks;
 
                 if(marks > 100){
                     cout <<"Enter Marks between 0 to 100:" << endl ;
                     break;
                 }
                 bool flag=1;
                 for(int i = 0 ; i < n ; i ++){
                     if(id == stu[i].getId()){
                         flag=0;
                         cout <<"Entered id is Duplicate:,Enter New id";
                         break;
                             
                     }
                 }
                 if(flag ==1){
                    stu.emplace_back(id,name,marks);
                    cout <<"Data inserted Successfully" << endl;
                 }
                break; 
             }
         case 2:
             {
                 int i;
                 int n=stu.size();
                 for(i = 0 ; i < n ; i ++){
                     stu[i].showData();
                 }
                 break;
             }
         case 3:
             {
                 int id;
                 cout <<"Enter id you want to search:";
                 cin >> id;
                 bool flag=1;
 
                 int n= stu.size();
                 for(int i = 0; i < n ; i ++){
 
                     if(id == stu[i].getId()){
                         flag=0;
                         stu[i].showData();
                         cout <<"Data search successfully:" << endl;
 
                     }
                 }
                 if(flag == 1){
                     cout <<"Enter Proper student id:" << endl;
                 }
                 break;
             }
 
         case 4:
             {
                 int id;
                 cout <<"Enter id you want to delete:";
                 cin >> id;
                 bool flag=1;
 
                 int n= stu.size();
                 for(int i = 0; i < n ; i ++){
 
                     if(id == stu[i].getId()){
                         flag=0;
                         stu.erase(stu.begin()+ i);
                         cout <<"Data Deleted Successfully:" << endl;
                     }
                 }
                 if(flag == 1){
                     cout <<"Enter Proper student id:" << endl;
                 }
                 break;              
             }
         case 5:
             {
                 int i;
                 int n = stu.size();
 
                 for(i = 0 ; i < n ; i ++){
                     if(stu[i].getMarks() > 33){
                         stu[i].showData();
                     }
                 }
                 
             }
         
         default:
             break;
         }
     } while (choice != 0);
     
 
     return 0;
 }