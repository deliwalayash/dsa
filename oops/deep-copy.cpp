#include <iostream>

using namespace std;

class Car
{
private:
int speed;
string colour;

public:
string name;
Car()
    {
        cout << "Default Constructor initiated:" << endl;
        this->name = "";
        this->speed = 0;
        this->colour = "";
    }
    Car(string name,int speed,string colour)
    {
        cout << "Parameter Constructor initiated:"<<endl ;
        this->name = name;
        this->speed = speed;
        this->colour = colour;
    }

    Car(Car &obj){
        
    }

   

    void getData()
    {
        cout << "Name:" << this->name << endl;
        cout << "Speed:" << this->speed << endl;
        cout << "Colour:" << this->colour << endl;
    }
    ~Car(){
        cout <<"Deconstructor is Called";
    }
};

int main()
{
    
    Car c1("Swift",100,"White");
   
    Car &c3=c1;    // this is deep copy
    c1.name="Wagon R";
    c1.name="Nexa";
    c3.getData();

    return 0;
}