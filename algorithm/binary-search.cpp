#include<iostream>
#include<vector>

using namespace std;



void bubblesort(vector<int> &arr,int);
int binarySearch(vector<int> &arr,int,int,int);
int main(){

    int size;
    cout <<"Enter size of array:";
    cin >> size;
    vector<int> arr(size);

    for(int i = 0; i < size ; i++){
        cout <<"Enter data:";
        cin >>arr[i];
    }

    cout <<"---------before----------\n";

    for(int val :arr){
        cout << val <<" ";
    }

    bubblesort(arr,size);

    cout <<"\n---------after----------\n";
    for(int val :arr){
        cout << val <<" ";
    }
    int key;
    cout <<"Enter key you want to find in array:";
    cin >> key;

    int idx=binarySearch(arr,0,size-1,key);

    if(idx == -1){
        cout <<"Element not found in array:";
    }
    else{
        cout <<"Element found in array on index :" <<idx;
    }

    return 0;
}
void bubblesort(vector<int> &arr,int size){

    for(int i =0 ; i < size-1;i++){
        for(int j =0;j <size-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                }
            }
    }
}

int binarySearch(vector<int> &arr,int low,int high,int key){
    int count =0;

    if(low >=high)
    return -1;

    int mid =(low+high)/2;
    if(key == arr[mid]){
        return mid;
    }
    else if(key < arr[mid]){
        return binarySearch(arr,low,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,high,key);
    }

}