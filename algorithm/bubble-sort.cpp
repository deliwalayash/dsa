#include<iostream>
#include<vector>

using namespace std;

void bubblesort(int & );


int main(){
    int size;
    cout <<"Enter size of array:";
    cin >> size;
    vector<int> arr(size);


    for(int i = 0 ;i < size; i ++ ){
        cout <<"Enter data:";
        cin >> arr[i];
    }
     cout <<"---------before--------------";
    for(int val: arr){
      
        cout << val << " ";
    }

    bubblesort(arr);
    cout <<"---------after--------------";
    for(int val: arr){
     
        cout << val << " ";
    }
    cout << 87144204 % 6;


    return 0;
}

void bubblesort(int &arr){
    int temp;
    for(int i = 0 ; i < arr.size()-1; i++){
        for(int j = 0 ; j < arr.size() - 1; j++){
            if(arr[j] > arr[j+1]){
            //    temp = arr[j+1];
            //    arr[j+1]=arr[j];
            //    arr[j] = temp;
            swap(arr[j],arr[j+1]);

            }
        }
    }
}