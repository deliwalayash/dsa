#include<iostream>
#include<vector>

using namespace std;

void insertionsort(vector<int> &);

int main(){


    int size;
    cout <<"Enter size of array:";
    cin >> size;
    vector<int>arr(size);
    cout <<"---------before--------------" << endl;

    for(int i = 0 ;i < size; i ++ ){
        cout <<"Enter data:";
        cin >> arr[i];
    }

    insertionsort(arr);
    cout <<"---------after--------------";
    for(int val: arr){
      
        cout << val << " ";
    }
}

void insertionsort(vector<int> &arr){

    for(int i = 1;i < arr.size() ; i++){
        int key = arr[i];
        int j = i -1;
        while( j >= 0 && arr[j] > key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}