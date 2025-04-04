#include<iostream>

using namespace std;

int add(int ,int);
int sub(int ,int);
int mul(int ,int);
int division(int ,int);
int mod(int ,int);

int main(){
 

    int n1,n2;
    char choice;

    do
    {
        cout << "Enter first number:" << endl;
        cin >> n1;
        cout << "enter second number:" << endl;
        cin >> n2;
        cout << "Enter + for Addition:" << endl;
        cout << "Enter - for Subtraction:" << endl;
        cout << "Enter + for Multiplication:" << endl;
        cout << "Enter + for Division:" << endl;
        cout << "Enter % for Modulo:" << endl;
        cout <<"Enter x for exit:" << endl;

        cin >> choice;

        switch (choice)
        {
        case '+':
            cout << "ans:" << add( n1,n2) << endl;
            break;
        case '-':
            cout << "ans:" << sub( n1,n2) << endl;
            break;
        case '*':
            cout << "ans:" << mul( n1,n2) << endl;
            break;
        case '/':
            cout << "ans:" << division( n1,n2) << endl;
            break;
        case '%':
            cout << "ans:" << mod( n1,n2) << endl;
            break;
        case 'x':
            cout <<"Thanks,Visit Again:" << endl;
            break;
        
        default:
            cout <<"Please enter Proper Choice:" << endl;
            break;
        }
    } while (choice != 'x');

return 0;
}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int division(int a,int b){
    return float(a/b);
}
int mod(int a,int b){
    return a%b;
}