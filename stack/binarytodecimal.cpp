#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int main(){

    string binarystr;
    stack <int> binarystack;

    cout <<"Enter binary number->";
    cin >>binarystr;

    for(int val : binarystr){
        if(val == '1'){
            binarystack.push(1);
        }
        else if(val == '0')
        {
            binarystack.push(0);
        }
        else{
            cout <<"invalid binary number:" << endl;
            return 1;
        }
    }

    int decimal = 0,power = 0;

    while(binarystack.empty()==0){
        int bit = binarystack.top();
        decimal = decimal + bit *pow(2,power);
        power++;
        binarystack.pop();
    }

    cout << "decimal is:" << decimal;
    return 0;
}