#include<iostream>

using namespace std;

int main(){

    int size;
    cout <<"Enter size of row";
    cin >> size;
    int i,j,s;
    for(i = 0 ; i < size; i++){
        for(s=size-1;s>i;s--){
            cout <<" ";
        }
        for (j = 0 ; j <= i ; j++){
            cout <<"#";
        }
        cout << endl;
    }
}