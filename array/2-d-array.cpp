#include<iostream>

using namespace std;

int main(){

    int arr[3][3];
    int i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout <<"Enter value of array:";
            cin >> arr[i][j];
        }
    }
    

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
   

    return 0;
    
}