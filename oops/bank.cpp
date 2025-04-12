#include<iostream>
#include<string>

using namespace std;

class bank
{
private:
    int balance;
public:

    string name;
    long int acno;
    string city;
    string ac_type;

    void setData(int balance,string name,long int acno,string city,string ac_type){
     this->balance=balance;
     this->name=name;
     this->acno=acno;
     this->city=city;
     this->ac_type=ac_type;
    }

    void getData(){
        cout << "Name:" << this->name << endl;
        cout << "acno:" << this->acno << endl;
        cout << "Balance:" << this->balance << endl;
        cout << "City:" << this->city << endl;
        cout << "ac_type:" << this->ac_type << endl;
    }

    static string bankname;
};

string bank :: bankname="Hdfcbank";

int main(){

    int balance;
    string name;
    long int acno;
    string city;
    string ac_type;
    int num,i,choice;
    cout <<"Enter number of account you want to open";
    cin >> num;

    bank b[num];

    for(i = 0;i < num; i ++){

       cout <<"\nEnter  " << i+1 <<"  Customer Data:" << endl;
       cin.ignore();

       cout <<"Enter Account Holder Name" << endl;
       getline(cin,name);
       
       cout <<"Enter bank acno" << endl;
       cin >> acno;

       cout <<"Enter bank balance amount" << endl;
       cin >> balance;

       cout <<"Enter city" << endl;
       cin >> city;

       cout <<"Enter 1: For Savings \nEnter 2: For Current" << endl;
       cin >> choice;

       if(choice == 1){
        ac_type="Savings";
       }
       else if(choice == 2){
        ac_type="Current";
       }
       else {
        cout <<"Invalid Choice Default to Savings Account:";
        ac_type="Savings";
       }


       b[i].setData(balance,name,acno,city,ac_type);
    }


    for(i = 0;i < num; i++){
        cout <<"\n------------------------" << endl;
        b[i].getData() ;
        cout <<"Bank Name:" << bank::bankname << endl;
        cout <<"------------------------" << endl;
    }
    return 0;
}