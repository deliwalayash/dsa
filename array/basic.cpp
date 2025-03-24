#include<iostream>

using namespace std;

int main(){
    int i,j;

    int arr[5];

    for(i = 0;i <=4 ;i++){
        cout << "Enter Any Value:";
        cin>> arr[i];
    }
    for(i = 0;i <=4 ;i++){
        cout << arr[i] << endl;
        
    }

    return 0;
}