#include<iostream>

using namespace std;

int main(){
      

    int n;
    cout << "Enter Number of Arrays:";

    cin >> n;

    int arr[n];

    for(int i=0;i<=n;i++){
    cout << "Enetr input for array:";
    cin >> arr[i];
    }

    for(int i = n;i>=0;i--){
        cout << arr[i] << " ";
    }

    return 0;
}