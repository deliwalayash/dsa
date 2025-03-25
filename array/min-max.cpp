#include<iostream>
#include<climits>

using namespace std;

int main(){
    int i,j,min=INT_MAX,index;

    int arr[5];

    for(i = 0;i <=4 ;i++){
        cout << "Enter Any Value:";
        cin>> arr[i];
    }

    cout << "The numbers List is:";

    for(i = 0;i <=4 ;i++){
        cout << arr[i] << " ";
        
    }

    cout << endl;

    for(i=0;i<=4;i++){
        if(arr[i]<min){
            min=arr[i];
            index=i;
        }
    }

    cout << "Minimmum nuber is : " << min << endl;
    cout << "Position of that number is:" << index + 1 << endl;;



    return 0;
}