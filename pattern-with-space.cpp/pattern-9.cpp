#include<iostream>

using namespace std;

int main(){

    int i,j;

    for(i=1;i<=4;i++){
        for(int s=i;s<=4;s++){
            cout << "  ";
        }
        for(j=1;j<=i;j++){
            cout << "*" << " ";
        }

        cout << endl;
    }
    for(i=1;i<=5;i++){
        for(int s=i;s>1;s--){
            cout << "  ";
        }
        for(j=i;j<=5;j++){
            cout << "*" << " ";
        }

        cout << endl;
    }
}