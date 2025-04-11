#include<iostream>

using namespace std;

int main(){

    int row,col,i,j,sum1=0,sum2=0,sum3;
    cout << "enter row and col of array:";
    cin >> row >> col;

    int arr[row][col];

    for(i = 0; i < row ; i ++){
        for (j = 0; j < col ; j++){
            cin >> arr[i][j];
        }
    }

    for (int k = 0;k < col ; k ++){
        sum1 = sum1 + arr[k][k];
    }
    for (int k = 0;k < row ; k ++){
        sum2 = sum2 + arr[k][col - k -1];
    }

    sum3 = sum1 -sum2;

    if(sum3 < 0){
        sum3=-sum3;
    }

    cout << sum3;
}
  