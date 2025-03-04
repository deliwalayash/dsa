#include<iostream>

using namespace std;

int main(){
    
    int num,i=2,isPrime=1;
    cout << "Enter number ";
   
    cin >> num;

    if(num<=1) isPrime=0;

    else  while(i < num){
             if(num % i ==0)
             {
                isPrime =0;
                break;
             }
             i++;
    }

    if(isPrime)  cout <<"It is a prime number";
    else cout <<"It is not a prime number";
   


    return 0;
}