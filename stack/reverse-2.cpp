#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    string num;
    stack<char> s;

    cout << "Enter any number you want to reverse: ";
    cin >> num;

    for(char digit : num) {
        s.push(digit);
    }

    cout << "Reversed number is: ";

    for(char d : num){
        cout <<s.top();
        s.pop();
    }
    // while(!s.empty()) {  //both are same
    //     cout << s.top();
    //     s.pop();
    // }

    cout << endl;
    return 0;
}