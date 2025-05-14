#include<iostream>
#include<stack>

using namespace std;

int main(){

    long long int n,r=0;
    stack <int> s;
    cout <<"enter any number you want to reverse:";
    cin >> n;

    while( n > 0){
        s.push(n % 10);
        n = n /10;
    }

    // while(s.empty() ==0){
    //     r = r * 10 +s.top();
    //     s.pop();
    // }

    // cout << r;

    while(s.empty()==0){
        cout <<s.top();
        s.pop();
    }
    return 0;
}