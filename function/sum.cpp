#include<iostream>

using namespace std;

int sum(int a,int b){
    int s= a+b;
    return s;
}

void min(int a,int b){
    if(a<b){
        cout << a <<"is minimum";
    }
    else{
        cout << b <<"is minimum";
    }  
    cout << endl;
}

void sumN(int n){
    int sum=0;

    for(int i =1;i <=n ;i++){
        sum = sum + i;
    }
    cout << sum << endl;
}

int main(){

cout << sum(10,5) << endl;

min(30,20);

sumN(5);
sumN(20);
sumN(100);
return 0;
}