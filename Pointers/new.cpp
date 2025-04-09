#include<iostream>

using namespace std;

void rev(int *,int);

int main(){
    int size,i;

    cout <<"Enter size of array:";
    cin >>size;

    int arr[size];

    for(i=0;i < size;i++){
        cout <<"enter elements of array:";
        cin >> arr[i];
    }


    for(i=0;i < size;i++){
        cout << arr[i] <<" ";
        
    }

    cout << endl;

    rev(arr,size);

    return 0;
    
}

void rev(int *arr2,int size){
    
    int arr2,i;

    for(i=size-1;i>=0;i--){
       cout  << arr2[i] << " ";     
    }
    
}