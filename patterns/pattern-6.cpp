#include<iostream>

using namespace std;

int main(){
    int i,j;
    

    for(i=5;i>=1;i--)
    { 
        for(j=i;j>=1;j--){
            cout << '*' << " ";
        }

        cout<< endl;
    }
}

// * * * * *  
// * * * *  
// * * *  
// * *  
// *  
