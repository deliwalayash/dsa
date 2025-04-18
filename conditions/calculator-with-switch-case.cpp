#include<iostream>

using namespace std;

int main(){

    int a,b;
    char choice;
    cout << "Enter First Number" << endl;
    cin>>a;
    cout << "Enter Any choices of +,-,*,/,%" << endl;
    cin >> choice;
    cout << "Enter Second Number" << endl;
    cin >> b;

    switch (choice)
    {
    case '+':
        cout << "Addition is" << a+b;
        break;
    case '-':
        cout << "Subtraction is"<< a-b;
        break;
    case '*':
        cout << "Multiplication is " << a*b;
        break;
    case '/':
        cout << "Division is " << a/b;
        break;
    case '%':
        cout << "Modulo  is " << a%b;
        break; 
    default:
        cout << "Enter a valid choice";

    }

    return 0;
}