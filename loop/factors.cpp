#include<iostream>

using namespace std;

int main(){

    int i,num;

    cout << "enter number";

    cin >> num;

    for(i=1;i<=num;i++)

    {
        if(num % i==0)
        {
            cout << i << " ";
        }
    }


    return 0;
}