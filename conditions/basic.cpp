#include<iostream>

using namespace std;

int main(){
  
    int num;
    cout << "Enter any number";

    cin >> num;

    if(num > 0){
        cout << "Entered Number is Positive";
    }else if(num < 0){
        cout << "Entered Number is Negative";
    }else{
        cout << "Entered Number is Netrual";
    }

    return 0;
}