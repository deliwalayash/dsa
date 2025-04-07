#include<iostream>

using namespace std;

int main(){

    int *ptr;

    int a = 10;

    ptr = &a;

    float price = 100.25;
    float *ptr2=&price;
    float **ptr3=&ptr2;

    cout <<&a << endl; 
    cout << ptr << endl;
    cout << &ptr << endl;
    cout <<&price << endl; 
    cout << price << endl;
    cout << &ptr2 << endl;
    cout << **ptr3 << endl;
    cout << *ptr3 << endl;
    cout << ptr3 << endl;

    return 0;
}