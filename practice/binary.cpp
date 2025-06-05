#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &arr);
int binarySearch(vector<int> &arr,int,int,int key);
int main(){
    
    cout <<"Enter size of array:";
    int size;
    cin >> size;

    vector<int> arr(size);

    for(int i = 0 ; i < arr.size() ; i++){
        cout <<"Enter data:";
        cin >> arr[i];
    }

    cout <<"\n---------before--------\n";
    for(int val:arr){
        cout << val << " ";
    }

    bubblesort(arr);

     cout <<"\n---------after--------\n";
     
    for(int val:arr){
        cout << val << " ";
    }

    cout <<"Enter key you want to search:";
    int key;
    cin >> key;

    int idx=binarySearch(arr,0,size-1,key);

    cout <<idx+1;

    return 0;
}

void bubblesort(vector<int> &arr){

    for(int i = 0; i < arr.size() - 1;i++){
        for(int j = 0; j < arr.size() -i-1 ; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int binarySearch(vector<int> &arr,int low,int high,int key){

    if(low >=high)
    return -1;

    int mid=(low + high) / 2;

    if(key = arr[mid]){
        return mid;
    }

    else if(key < arr[mid]){
        return binarySearch(arr,low,mid-1,key);
    }
    else

    return binarySearch(arr,mid+1,high,key);
    
}