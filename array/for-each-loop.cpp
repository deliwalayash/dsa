#include<iostream>

using namespace std;

int main(){

    int i,arr[5];

    for(i=0;i<5;i++){
        cout<< "Enter Value of Array:";
        cin >> arr[i];
    }

    for(int data:arr){
        cout << data << " ";
    }

}