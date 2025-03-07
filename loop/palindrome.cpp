#include<iostream>

using namespace std;

int main(){

    int num,rem,rev=0,temp;

    cout << "Enter Any Number";
    
    cin >> num;

    temp=num;


    while (num!=0)
    {
        rem = num % 10;

        rev =(rev*10) + rem;

        num=num/10;
    }

    if(temp == rev)

   { cout << "Its A palindrome number";}

    else  {cout << "Its Not a Palindrome number";}

    return 0;
    
}