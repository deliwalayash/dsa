#include<iostream>

using namespace std;

int main(){
    int i,sum=0;

    int arr1[3],arr2[3],sumarr[3];

    for(i = 0;i <=2 ;i++){
        cout << "Enter Any Value arr1: ";
        cin>> arr1[i];
    }

    for(i = 0;i <=2 ;i++){
        cout << "Enter Any Value arr2: ";
        cin>> arr2[i];
    }
    for(i = 0;i <=2 ;i++){
        sumarr[i]=arr1[i]+arr2[i];
    }

    cout << endl;

    cout << "Enter sum array:";
    for(i = 0;i <=2 ;i++){
       
        cout<< sumarr[i] << " ";
    }

    cout << endl;
    

    return 0;
}