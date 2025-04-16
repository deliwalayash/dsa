#include<iostream>

using namespace std;

class Sum{
    public:
    void sum(int a,int b){
        cout << a+b;
    }
    void sum(float a,float b){
        cout << a+b;
    }
    void sum(int a,float b){
        cout << a+b;
    }
    void sum(float a,int b){
        cout << a+b;
    }

};

int main(){

    Sum s1;
    s1.sum(10.5f,5);

    return 0;
}