#include <iostream>

using namespace std;

class Vehicle
{
public:
    string car;
    int price;
    string bike;
};

class Company : public Vehicle
{
public:
    string model;
    string color;

    void getData()
    {

        cout << "Company Name:" << this->car << endl;
        cout << "Price:" << this->price << endl;
        cout << "Bike Company:" << this->bike << endl;
        cout << "Model:" << this->model << endl;
        cout << "Color:" << this->color << endl;
    }
};

class Maruti : public Company{
    public:
    string Department;
    int sales;
    int profit;

};

int main()
{

    Vehicle v1;
    Company c1;
    Maruti m1;

    c1.car = "Maruti";
    c1.price = 10;
    c1.model = "Swift";
    c1.color = "White";
    // c1.getData();

    m1.Department="Serice";
    m1.price=20;
    m1.model="nexa";
    m1.getData();
    

    return 0;
}
