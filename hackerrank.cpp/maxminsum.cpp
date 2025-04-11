#include<iostream>

using namespace std;

int main(){
    int size,min,max,sum=0;
    cout <<"enter size of array:";

    cin >> size;

    int arr[size];

    for(int i = 0;i < size;i ++){
        cout <<"Enter elemnts of array:";
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];

    for(int i = 0 ; i < size ; i ++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i = 0 ; i < size ; i ++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0 ; i < size ; i ++){
       sum = sum + arr[i];
    }

    cout << sum - max <<" " << sum - min;

    return 0;

}