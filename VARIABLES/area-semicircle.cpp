#include<iostream>

using namespace std;

int main(){
    
    float pi=3.14,r,area;

    cout << "enter radius of the circle:";

    cin  >> r;

    area= 0.5 * (pi * r * r) ;

    cout << "Area of circle is :" << area << endl;

    return 0;
}