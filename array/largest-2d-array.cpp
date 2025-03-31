#include<iostream>

using namespace std;

int main(){

    int arr[3][3];
    int i,j,row,column;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout <<"Enter value of array:";
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                row = i+1;
                column =j+1;
                
            }
        }
    }
    cout << endl << endl;
    cout << "maximum number :" <<  max << " ";
    cout << "positon row:" << row << " " << "Position column:" << column <<" ";


return 0;
}