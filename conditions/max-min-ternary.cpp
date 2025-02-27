#include<iostream>

using namespace std;

int main(){

    int a,b;

    cout << "enter any two number " << endl;

    cin >> a >> b;

    (a == b) ? cout << "both number are same:" : (a > b) ? cout << "a is bigger" : cout <<"b is bigger";

}