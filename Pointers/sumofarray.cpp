#include<iostream>

using namespace std;

int sumArr(int arr[],int);

int main(){
    int size,i;

    cout << "Enter size of Array:";
    cin >> size;

    int arr[size];

    for(i=0;i<size;i++){
        cout << "enter elements";
        cin >>arr[i];
        
    }

    cout << sumArr(arr,size);

    return 0;
}

int sumArr(int arr[],int size){
    int i,sum=0;

    for(i  =0 ;i < size; i++){
        sum = sum + arr[i];
    }

   return sum;
}