#include<iostream>

using namespace std;

class car{
    private:
    int price;
    public:
    string name;
    string fuel;
    string model;
    static string company;
    car(int price,string name,string fuel,string model){
        this->price=price;
        this->name=name;
        this->fuel=fuel;
        this->model=model;
    }

    void getData(){
        cout << "Name:" <<this->name;
        cout << "Price:" <<this->price;
        cout << "Fuel:" <<this->fuel;
        cout <<"Model:" <<this->model;
        }
};

string car::company ="Maruti";

int main(){
    int num,i;
    cout <<"Enter how many car Models you want to enter \n";
    cin >> num;

    car c[num];

    for(i = 0;i < num; i ++){
        cout <<"Enter ";
    }




}

