#include<iostream>

using namespace std;

class India{
    public:

        void wear(){
            cout <<"Dhoti kurta" << endl;
        }
        void company(){
            cout << "TCS & Infosys" << endl;
        }
};

class Usa:public India{
    public:

        void wear(){
            cout << "Suit" << endl;
        }

        void company(){
            cout <<"Apple & Amazon " << endl;
        }
};

int main(){

    India i1;
    Usa u1;

    Usa *ptr2=&u1;

    ptr2->wear();

    India *ptr=&u1;

    ptr->company();

    ptr->wear();

    return 0;
}