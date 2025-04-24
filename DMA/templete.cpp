#include<iostream>

using namespace std;

template <typename T1,typename T2> //with the help of templete we can make muliple datatypes
void add(T1 a,T2 b){
    cout << a+b << endl;
};

int main(){
    add(5.5,10.2);

    add(5,10);

    add(5,10.2);

    return 0;
}