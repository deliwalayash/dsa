#include<iostream>
#include<vector>

using namespace std;

void selectionsort(vector<int> &arr);

int main(){
  

    int size;
    cout<<"Enter size of array:";
    cin >> size;

    vector<int> arr(size);

    for(int i = 0 ; i < arr.size() ; i++){
        cout <<"Enter data:";
        cin >> arr[i];
    }

    cout <<"\n--------before-------\n";

    for(int val: arr){
        cout <<val << " ";
    }

     cout <<"\n--------after-------\n";
    selectionsort(arr);

     for(int val: arr){
        cout <<val << " ";
    }
     return 0;
}

void selectionsort(vector<int> &arr){
    int min;

    for(int i = 0; i < arr.size()-1;i++){
         min=arr[i];
        for(int j = i + 1; j < arr.size(); j++){
          
          if(arr[j] < min){
            min=arr[j];
            // int temp=arr[j];
            // arr[j]=arr[i];
            // arr[i]=temp;
            // swap(arr[j],arr[i]);
          }
        }
        arr[i]=min;
    }
}