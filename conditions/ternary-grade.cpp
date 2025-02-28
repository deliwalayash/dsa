#include<iostream>

using namespace std;

int main(){

    int mark;

    cout << "Enter Your Mark" << endl;

    cin >> mark;

    (mark > 90) ? cout <<"A" : (mark >80) ? cout << "B" : (mark > 70) ? cout << "C" : cout <<"D";

}