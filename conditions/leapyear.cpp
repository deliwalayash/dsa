#include<iostream>

using namespace std;

int main(){


    int year;

    cout <<"Enter Any Year";

    cin >> year;

    if( (year % 4 ==0) && (year % 100 !=0) || (year % 400==0) ){
        
        cout <<"Its is a leap Year";
    }

    else cout << "it is not a leap year";
    
    return 0;
}