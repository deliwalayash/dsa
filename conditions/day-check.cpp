#include<iostream>

using namespace std;

int main(){
  
    int num;

    cout << "Enter any day";

    cin >> num;

    if(num == 1){
        cout << "Yay,Its Monday Today......";
    }else if(num == 2){
        cout << "Yay,Its Tuesday Today......";
    }else if(num == 3){
        cout << "Yay,Its Wednesday Today......";
    }else if(num == 4){
        cout << "Yay,Its Thursday Today......";
    }else if(num == 5){
        cout << "Yay,Its Friday Today......";
    }else if(num == 6){
        cout << "Yay,Its Saturday Today......";
    }else if(num == 7){
        cout << "Yay,Its Sunday Today......";
    }else {
        cout << "Oops,Enter Correct Day......";
    }

    return 0;
}