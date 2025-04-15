#include <iostream>

using namespace std;

class Car
{
private:
    string name;
    int speed;
    string colour;

public:
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


  

    Car c1[10]; // default constructor runs for all 10

    // Now assign each using parameterized constructor
    c1[0] = Car("Swift", 100, "White");
    c1[1] = Car("Civic", 120, "Black");
    c1[2] = Car("BMW", 150, "Blue");
    c1[3] = Car("Audi", 160, "Red");
    c1[4] = Car("Fortuner", 110, "Grey");
    c1[5] = Car("Thar", 90, "Brown");
    c1[6] = Car("Creta", 130, "Silver");
    c1[7] = Car("i20", 140, "Green");
    c1[8] = Car("City", 125, "Orange");
    c1[9] = Car("Verna", 135, "Yellow");

    // Display all cars
    for (int i = 0; i < 10; ++i)
    {
        cout << "\nCar " << i + 1 << " Details:" << endl;
        c1[i].getData();
    }

    return 0;
    
    // Get user input for each car
    // for(int i = 0; i < 2; i++) {
    //     string name, colour;
    //     int speed;
        
    //     cout << "\nEnter details for Car " << i+1 << ":" << endl;
        
    //     cout << "Enter car name: ";
    //     cin >> name;
        
    //     cout << "Enter car speed: ";
    //     cin >> speed;
        
    //     cout << "Enter car colour: ";
    //     cin >> colour;
        
    //     // Assign the values to the current car object
    //     c1[i] = Car(name, speed, colour);
    // }
    
    // Display all cars
    // cout << "\n--- Car Details ---" << endl;
    // for(int i = 0; i < 2; i++) {
    //     cout << "\nCar " << i+1 << ":" << endl;
    //     c1[i].getData();
    // }
    
    return 0;
}
    
   
