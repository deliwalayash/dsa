#include<iostream>

using namespace std;

int main(){
    int i,a,b;
    string words[]={"one","two","three","four","five","six","seven","eight","nine"};

    cout << "enter two number" ;
    cin >> a >> b;

    for(i=a;i<=b;++i){
        if(i >= 1 && i<=9){
            cout << words[i-1] << endl;
        }
        else if (i >=10){
            if(i % 2 == 0){
                cout << "even" << endl;
            }
            else cout << "odd";
        }
    }
}