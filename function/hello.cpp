#include<iostream>

using namespace std;

int prindhello(){
    cout << "Hello world" << endl;
    return 3;
}

int main(){

    prindhello();
    cout << endl;
    int val = prindhello();
    cout << endl;
    cout << val;

    cout<< endl;

    cout <<prindhello();

    return 0;
}