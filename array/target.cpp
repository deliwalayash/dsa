#include<iostream>

using namespace std;

int main(){

    int arr[3][3];
    int i,j,target,target_row,target_col;
    bool isFind;

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
   
    cout <<"Enter number you want to find";
    cin >> target;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(target == arr[i][j]){
                isFind = true;
                target_row=i;
                target_col=j;
                
            }
        }
        
    } 

    if(isFind == true){
        cout << "Target is in the Array:" << target_row << target_col;
    }
    else{
        cout <<"Traget is not in the Array:";
    }
   

    return 0;
    
}