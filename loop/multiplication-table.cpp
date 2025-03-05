#include<iostream>

using namespace std;

int main(){

    int i,num;

    cout << "Enter number of which you want table" << endl;
    cin >> num;

    cout << "The table of " << num << " is as below" << endl << endl;

    for(i=1;i<=10;i++){

        cout << num << " * " << i << " = " << num*i << endl ;
    }
}