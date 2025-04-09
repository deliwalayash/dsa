#include<iostream>

using namespace std;

int main(){

    int *ptr,**ptr2;
    int a = 10;
    ptr= &a;
    ptr2=&ptr;
  
    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;
   
    return 0;
}