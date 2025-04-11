#include<iostream>

using namespace std;

int max(int *,int);

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

    cout << max(arr,size);

    return 0;
    
}

int max(int *arr,int size){
    
    int max=arr[0],i;

    for(i=0;i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

  return max;

    
}