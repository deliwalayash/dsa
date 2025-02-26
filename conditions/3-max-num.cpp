#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout << "Enter three number:";

    cin >> a >> b >> c;

    if(a == b && a==c ){
        cout << "all numbers are same";

    } else {
        if (a > b){
            if (a > c){
                cout << "a is bigger";
            }
            else {
                cout << "c is bigger";
            }
    
        }else if (b > c){
            cout << "b is bigger";
        }else {
            cout << "c is bigger";
        }

    }

  

    return 0;
}