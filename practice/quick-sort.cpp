#include<iostream>
#include<vector>
using namespace std;

void quicksort(vector<int> & ,int,int);
int partition(vector<int> &,int,int);

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

    quicksort(arr,0,size - 1);

     cout <<"\n---------after--------\n";
     
    for(int val:arr){
        cout << val << " ";
    }

    return 0;

}

void quicksort(vector<int> &arr,int low,int high){

    if(low >=high){
        return ;
    }

    int Pivotidx=partition(arr,low,high);
    quicksort(arr,low,Pivotidx-1);
    quicksort(arr,Pivotidx+1,high);
}

int partition(vector<int> &arr,int low,int high){

    int count=0;
    int temp;
    int pivot=arr[low];

    for(int i = low ; i <=high ; i++){
        if(arr[i] < pivot){
            count++;
        }
    }

    int Pidx=low + count;
    swap(arr[low],arr[Pidx]);
    int left=low;
    int right=high;

    while (left < Pidx && right > Pidx)
    {
        while(arr[left] < pivot){
            left++;
        }
        while(arr[right] > pivot){
            right--;
        }

        if(left < Pidx && right > Pidx){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

    return Pidx;
    
}