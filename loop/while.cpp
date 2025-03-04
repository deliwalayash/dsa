#include<iostream>

using namespace std;

int main(){
    int i=1,num,ans=1;

    cout << "input your number ";

    cin >> num;
  
    while(i <=num){
        ans=ans*i;
        i++;
    }   
    
    cout << ans;
}