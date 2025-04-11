#include <iostream>

using namespace std;

void calc(int a, int b);

int main()
{

    int x, y;
    char c;

    cout << "Enter two value:" << endl;
    cin >> x >> y;

   

    calc(x, y);

    return 0;
}

void calc(int a, int b)
{  
    char c;
   

    do
    {
        cout <<"Enter + for addition" << endl;
        cout <<"Enter - for subtraction" << endl;
        cout <<"Enter * for multiply" << endl;
        cout <<"Enter / for division" << endl;
        cout <<"Enter x for exit" << endl;
        
        cout << "enter operation you want to perform:" << endl;
        cin >> c;
        switch (c)
        {
        case '+':
        {
            cout << a + b << endl;
        }
        break;
        case '-':
        {
            cout << a - b << endl;
        }
        break;
        case '*':
        {
            cout << a * b << endl;
        }
        break;
        case '/':
        {
            cout << a / b << endl;
        }
        break;
        case 'x':
        {
            cout << "Thank you for choosing us:" << endl
                 << "Have a nice day";
        }
        break;
        default:
        {
            cout << "enter proper choice";
        }
        break;
        }
    } while (c != 'x');
}