#include<iostream>

using namespace std;


int main(){

    int i,j;


    for(i = 1;i < 9;i++ ){
       if(i % 2== 1){
        for (int s=i;s<9;s++){
            cout << " ";
        }
       
        for (j=1 ; j <=i;j++){
            cout << "* ";
        }
        cout << endl;
       }
      
    }
    for(i = 1;i <=9;i++ ){
       if(i % 2== 1){
        for (int s=i;s>1;s--){
            cout << " ";
        }
       
        for (j=9 ; j >=i;j--){
            cout << "* ";
        }
        cout << endl;
       }
      
    }
    
    return 0;
    
}


