#include<iostream>

using namespace std;

int main(){
    int i,size,max,num=0;
    cout <<"enter size of array:";

    cin >> size;

    int arr[size];


    for(i = 0;i < size ; i ++){
        cin >> arr[i];
    }

    max=arr[0];

    for(i = 0 ; i < size ; i++){
        if (arr [i] > max) {
            max = arr[i];
        }
        if (arr[i] == max){
            num++;
        }
    }


    cout << num;

    return 0;
}