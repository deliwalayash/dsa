#include<iostream>

using namespace std;

int main(){
    int i,index=1,n,size;
    int arr[]={1,3,5,8,9,4,-5,45,69,54,12,322,52};



     cout <<" Enter the number you want to find:";
     cin >> n;

     size=sizeof(arr)/sizeof(int);

     for(i=0;i<size;i++){
       
        
       if(arr[i]==n){
        cout << index;
        return i;
       }
      
       index++;
       
      
     }
   
     return -1;
     
}