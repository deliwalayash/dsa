#include <iostream>

using namespace std;

class Car
{
private:
    string name;
    int speed;
    string colour;

public:
    void setData()
    {

        cout << "Enter Car name";
        cin >> this->name;
        cout << "Enter Car Speed";
        cin >> this->speed;

        cin.ignore();

        cout << "Enter Car Colour";
        cin >> this->colour;
    }

    void getData()
    {
        cout << "Name:" << this->name << endl;
        cout << "Speed:" << this->speed << endl;
        cout << "Name:" << this->colour << endl;
    }

    Car *getAddress()
    {
        return this;
    }
};

int main()
{
    Car s1, s2;

    s1.setData();
    s1.getData();
    s2.setData();
    s2.getData();

    cout << s1.getAddress();
    cout << s2.getAddress();

    return 0;
}