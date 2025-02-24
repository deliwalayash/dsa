#include<iostream>

using namespace std;

int main(){
    
    int b,h,area;

    cout << "enter base and height of triangle:";

    cin >> b >> h;

    area= 0.5 * (b*h);

    cout << "The area of triangle is : " << area;

    

    return 0;
}