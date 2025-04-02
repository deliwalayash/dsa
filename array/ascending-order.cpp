#include<iostream>

using namespace std;

int main(){

     
    int arr[]={9,8,7,6,5,4},size,i,j,k,index=0;

    int min=arr[0];

    size=sizeof(arr)/sizeof(int);

    int minarr[size];

    min = arr[0];

    for( i=0;i<size-1;i++)
    {
        for( j =i+1;j <size;j++){
            if(arr[i] < arr[j]){
                minarr[index] = arr[i];
                index++;
            }
        }
    }

    for(k = 0;k<size;k++){
        cout << minarr[k] << " ";
    }

    cout << endl;
   
    return 0;
}