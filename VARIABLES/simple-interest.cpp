#include<iostream>

using namespace std;

int main(){
    
    int p,r,n,interest;

    cout << "enter principle amount,rate of interest and number of years:";

    cin >> p >> r >> n;

    interest=(p*r*n)/100;

    cout << "The area of square is : " << interest;

    return 0;
}