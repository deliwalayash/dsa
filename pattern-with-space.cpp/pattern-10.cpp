#include<iostream>

using namespace std;

int main(){

    int i,j,s;

    for(i=1;i<=9;i++)
    if(i % 2 == 1){
        for(s=i;s > 1;s--){
            cout << " ";

        }
        for(j =i;j<=9;j++){
            cout << "* " ;
        }

        cout << endl;
    }
    for(i=2;i<=9;i++)
    if(i % 2 == 1){
        for(s=i;s < 9;s++){
            cout << " ";

        }
        for(j =i;j>=1;j--){
            cout << "* " ;
        }

        cout << endl;
    }
}