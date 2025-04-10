#include<iostream>

using namespace std;


int change(int *,int *);

int main(){
    int x =10,y =20;

    cout << x <<" " <<y << endl;

    change(&x,&y);

    cout << x <<" " << y;

   

    return 0;
}

int change(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    return(*a,*b);
}