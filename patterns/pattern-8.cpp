#include<iostream>

using namespace std;

int main(){
    int i,j;
    

    for(i=1;i<=5;i++)
    { 
        for(j=i;j>=1;j--){   // when first line there is alternate number than j=i
            cout << j << " ";
            
        }

        cout<< endl;
    }
}


// 1  
// 2 1  
// 3 2 1  
// 4 3 2 1  
// 5 4 3 2 1  