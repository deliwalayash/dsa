#include<iostream>

using namespace std;

int main(){


    long long int sum=0,i,num;

    cout << "Enter any number up to which you want to sum" << endl;

    cin >> num;
   
    for(i=1;i<=num;i++){

        sum=sum + i;
    }

    cout << "Sum of " << num << " is " << sum;
}