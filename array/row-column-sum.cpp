#include<iostream>

using namespace std;

int main(){
    
    int arr[3][3];

    int i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;

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

    
        for(j=0;j<=2;j++){
            sum1 =sum1 + arr[0][j];
            sum2 =sum2 + arr[1][j];
            sum3= sum3 + arr[2][j];
        }
        for(j=0;j<=2;j++){
            sum4 =sum4 + arr[j][0];
            sum5 =sum5 + arr[j][1];
            sum6= sum6 + arr[j][2];
        }
    
    cout << endl << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;
    cout << sum5 << endl;
    cout << sum6 << endl;

}