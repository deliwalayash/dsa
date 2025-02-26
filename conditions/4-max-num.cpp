#include<iostream>

using namespace std;

int main(){

    int a,b,c,d,max;

    cout << "Enter four number";

    cin >> a >> b >> c >> d;

    max=a;

    if(a>max) max=a;
    
    if(b>max) max=b;
    
    if(c>max) max=c;
    
    if(d>max) max=d;

    cout << "the biggest number is :" << max;
    return 0;
}