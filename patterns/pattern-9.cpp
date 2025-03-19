#include<iostream>

using namespace std;

int main(){
    int i,j;
    

    for(i=9;i>=1;i-=2)
    {    
        for(j=1;j<=i;j+=2){
            cout << j << " ";
            
        }

        cout<< endl;
    }
}

// 1 3 5 7 9 
// 1 3 5 7
// 1 3 5
// 1 3
// 1