#include<iostream>

using namespace std;


void swap(int *,int *);
int main(){


    int a=10,b=20;

    cout << a <<" " << b << endl;
    swap(&a,&b);

    cout << a <<" " << b;
}

void swap(int *x,int *y){
    int temp;

    temp = *x;
    *x=*y;
    *y=temp;

}