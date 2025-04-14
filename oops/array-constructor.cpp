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


    Car c1[2];
    
    // Get user input for each car
    for(int i = 0; i < 2; i++) {
        string name, colour;
        int speed;
        
        cout << "\nEnter details for Car " << i+1 << ":" << endl;
        
        cout << "Enter car name: ";
        cin >> name;
        
        cout << "Enter car speed: ";
        cin >> speed;
        
        cout << "Enter car colour: ";
        cin >> colour;
        
        // Assign the values to the current car object
        c1[i] = Car(name, speed, colour);
    }
    
    // Display all cars
    cout << "\n--- Car Details ---" << endl;
    for(int i = 0; i < 2; i++) {
        cout << "\nCar " << i+1 << ":" << endl;
        c1[i].getData();
    }
    
    return 0;
}
    
   
