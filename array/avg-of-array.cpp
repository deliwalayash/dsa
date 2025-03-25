#include<iostream>
#include<climits>

using namespace std;

int main(){
    int i,sum=0;

    int arr[5];

    for(i = 0;i <=4 ;i++){
        cout << "Enter Any Value:";
        cin>> arr[i];
    }

    cout << endl;
    
    for(i = 0;i <=4 ;i++){
        sum = sum + arr[i];
    }

    cout << "Sum of Array is:" << sum << endl;
    cout << "Average of Array is:"<< float(sum)/5;


    return 0;
}