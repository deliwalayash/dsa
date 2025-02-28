#include<iostream>

using namespace std;

int main(){
    

    int a,b,c,avg,per,grade;

    cout  << "Enter Marks of Maths & English & Science out of 100" << endl;

    cin >> a >> b >> c;

    avg = (a+b+c) / 3;

    cout << "Your Percentage is :" << avg << endl;

    if(a < 60 || b < 60 || c < 60) cout<<"You are fail";

    else{
        if (avg >= 90) cout << "Your Grade is A+";
        else if (avg >= 85) cout << "Your Grade is A";
        else if (avg >= 80) cout << "Your Grade is B";
        else if (avg >= 70) cout << "Your Grade is C";
        else if (avg >= 60) cout << "Your Grade is D";
        else cout << "You are fail";
    }
    
    return 0;
}