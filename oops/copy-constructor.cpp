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

   

    void getData()
    {
        cout << "Name:" << this->name << endl;
        cout << "Speed:" << this->speed << endl;
        cout << "Colour:" << this->colour << endl;
    }
};

int main()
{
    
    Car c1("Swift",100,"White");
    c1.getData();
    Car c2 = c1; //Shalow Copy
    c2.getData();
    c1.name="Ertiga";
    c1.getData();
    c2.getData();

    return 0;
}