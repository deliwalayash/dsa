#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    int vehicleId;
    string model;
    string type;
    bool isRented;

public:
    Vehicle()
    {
        this->vehicleId = 0;
        this->model = "";
        this->type = "";
        this->isRented = true;
    }

    void getData(int vehicleId, string model, string type)
    {
        this->vehicleId = vehicleId;
        this->model = model;
        this->type = type;
    }

    void viewvehicleDetails()
    {

        cout << "\n-------------------------------------\n";
        cout << "Vehicle Id:" << this->vehicleId << endl;
        cout << "Model:" << this->model << endl;
        cout << "Type:" << this->type << endl;
        cout << "Availability:" << (this->isRented ? "Availble" : "Not Available") << endl;
        cout << "--------------------------------------\n";
    }

    int getId()
    {
        return this->vehicleId;
    }

    int getvehiclestatus()
    {
        return this->isRented;
    }
};

class Rented : public Vehicle
{
protected:
    string name;
    string date;

public:
    Rented()
    {
        this->name = "";
        this->date = "";
    };

    void rentvehicle(string name, string date)
    {
        this->name = name;
        this->date = date;
        cout << "Vehicle Rented Successfully:" << endl;
        this->isRented = false;
    }

    void returnvehicle()
    {
        cout << "Vehicle return Successfully: " << endl;
        this->isRented = true;
    }
};

int main()
{
    int choice;
    int slot = 0;
    Rented v[5];

    do
    {

        cout << "Enter 1 to Add a Vehicle" << endl;
        cout << "Enter 2 to View a Vehicle" << endl;
        cout << "Enter 3 to Rent a Vehicle" << endl;
        cout << "Enter 4 to Return  Vehicle" << endl;
        cout << "Enter 5 to Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            int vehicleId;
            string model;
            string type;

            cout << "Enter vehicle Id:" << endl;
            cin >> vehicleId;

            cin.ignore();

            cout << "Enter vehicle model:" << endl;
            cin >> model;

            cout << "enter vehicle type:" << endl;
            cin >> type;

            v[slot].getData(vehicleId, model, type);
            slot++;
            break;
        }
        case 2:
        {
            int i;
            for (i = 0; i < slot; i++)
            {
                v[i].viewvehicleDetails();
            }
            break;
        }

        case 3:
        {

            int vehicleId;
            string name, date;
            bool flag = 1;
            cout << "Enter Vehicle id you want to rent:";
            cin >> vehicleId;

            for (int i = 0; i < slot; i++)
            {
                if (vehicleId == v[i].getId())
                {
                    flag = 0;
                    cin.ignore();
                    if (v[i].getvehiclestatus() == 1)
                    {
                        cout << "Enter Name:" << endl;
                        cin >> name;
                        cout << "Enter Date:" << endl;
                        cin >> date;
                        v[i].rentvehicle(name, date);
                    }
                    else
                    {
                        cout << "Oops Vehicle is not available:";
                    }
                };
            }
            if (flag == 1)
            {
                cout << "Enter Proper Vehicle id:" << endl;
            }
            break;
        }
        case 4:
        {
            int vehicleid;
            bool flag = 1;
            cout << "Enter vehcile id you want to return:" << endl;
            cin >> vehicleid;

            for (int i = 0; i < slot; i++)
            {
                flag = 0;
                if (vehicleid == v[i].getId())
                {
                    if (v[i].getvehiclestatus() == 0)
                    {
                        v[i].returnvehicle();
                    }
                    else
                    {
                        cout << "Vehicle already returned:";
                    }
                }
            }
            if (flag == 1)
            {
                cout << " Enter proper Vehicle id :" << endl;
            }
            break;
        }
        case 5:
        {
            cout << "visit agian :" << endl;
            break;
        }

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
