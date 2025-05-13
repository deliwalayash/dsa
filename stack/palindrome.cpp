#include<iostream>
#include<stack>
#include<string>


using namespace std;

int main(){

    stack<char> palindrome;
    string name;
    cout <<"Enter name for palindrome check:->";
    getline(cin,name);

    for(char c : name){
        palindrome.push(c);
    }

    bool flag =1;
    for(char d : name){
        if(d != palindrome.top()){
            {
                flag = 0;
                cout <<"It is Not a palindome string";
                break;
        }
      
    }  palindrome.pop();
}
  if(flag ==1){
        cout <<"Its a palindrome string:";
    }

return 0;
}
