#include<iostream>

using namespace std;

int main(){
    int i,j,n=1;
   

    for(i=1;i<=5;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            cout << n << " ";
            n+=2;
        }
        cout << endl;
    }
}