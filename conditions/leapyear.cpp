#include<iostream>

using namespace std;

int main(){


    int year;

    cout <<"Enter Any Year";

    cin >> year;

    if(year % 4 ==0) cout << "it is a leap year";

    else cout << "it is not a leap year";
    
    return 0;
}