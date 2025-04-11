#include<iostream>

using namespace std;

int main(){
    int size;
    cout << "enter size of array";
    cin >> size;
    vector<long> ar;

    long long sum = 0;
    for (int i = 0; i < ar.size(); i++) {
        sum += ar[i];
    }
    return sum;

    cout << sum;
    return sum;
}