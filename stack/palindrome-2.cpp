#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){

    stack<char> c1;
    bool flag=1;
    string name;
    cout <<"Enter any string you want to check for palindrome:";
    getline(cin,name);

    for(char c : name){
       c1.push(c);
    }

    for(char d : name){
        if(d != c1.top()){
            flag = 0;
            cout <<"Entered string is not palindrome:";
            break;
        }
        else{
            c1.pop();
        }
    }

    if(flag == 1){
        cout <<"Given string is palindrome:" ;
    }



    return 0;
}