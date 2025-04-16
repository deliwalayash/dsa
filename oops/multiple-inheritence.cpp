#include<iostream>

using namespace std;

class Party{

    public:
    int meal;
    void food(){
        cout <<"Enter number of meals:" << endl;
        cin >> meal;
    }

};

class Drinks{
    public:
    int drinks;
    void inputdrinks(){
        cout << "Enter number of drinks:";
        cin >> drinks;
    }
};

class Bill:public Party,public Drinks{
     public:
     int bill;
     void total_bill(){
        bill = (100 * meal) + (200 * drinks);
        cout << bill;
     }
};

int main(){

    Bill b1;
    b1.food();
    b1.inputdrinks();
    b1.total_bill();

    return 0;
}