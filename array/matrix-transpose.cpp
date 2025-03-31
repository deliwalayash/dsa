#include<iostream>

using namespace std;

int main(){
    
    int arr1[3][3];

    int i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout <<"Enter value of array1:";
            cin >> arr1[i][j];
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            
            cout << arr1[i][j] << " ";
        }cout << endl;
    }
    cout << endl << endl;
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout << arr1[j][i] << " ";
        }
        cout << endl;
    } 

    return 0;
}