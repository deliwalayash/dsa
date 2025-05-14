#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){

    string num;
    stack <char>c ;

    cout <<"Enter number you want to reverse:";
    cin >> num;

    for(char val: num){
        c.push(val);
    }

    while (c.empty()==0)
    {
        cout << c.top();
        c.pop();
    }
    


    return 0;
}