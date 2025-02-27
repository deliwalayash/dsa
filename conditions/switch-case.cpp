#include<iostream>

using namespace std;

int main(){

    int num;
    cout << "Enter 1 for Pav bhaji" << endl;
    cout << "Enter 2 for Vada Pau" << endl;
    cout << "Enter 3 for Pani Puri" << endl;

    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Your Pav Bhaji is ready";
        break;
    case 2:
        cout << "Your Vada Pau is ready";
        break;
    case 3:
        cout << "Your Pani Puri is ready";
        break;
    
    default:
        cout << "Enter a valid choice";

    }

    return 0;
}