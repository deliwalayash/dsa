#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> binary;
    int n;

    cout <<"Enter number you want in binary:";
    cin >> n;

    while(n > 0){
        int rem = n % 2;
        binary.push(rem);
        n = n / 2;
    }

    while(binary.empty()== 0){
        cout << binary.top();
        binary.pop();
    }



}