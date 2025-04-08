#include<iostream>

using namespace std;

int main(){

    int size;

    cout <<"enter the size of array:";
    cin >> size;

    int arr[size]={};

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    for(int i = 0;i < size;i++){
        cout <<  arr[i] << "Address:"<< &arr[i] << endl;
    }

    return 0;
}