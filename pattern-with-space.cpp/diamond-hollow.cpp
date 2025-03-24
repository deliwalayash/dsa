#include<iostream>

using namespace std;

int main(){
    int i,j;

    for (i=5;i>=1;i--){
        for(int s =i;s > 1;s--)
        {
            cout << " ";
        }
       
        for(j=i;j<=5;j++)
        {
            if(i == j || j ==5 )
            {
                cout << "*" << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (i=2;i<=5;i++){
        for(int s =i;s > 1;s--)
        {
            cout << " ";
        }
       
        for(j=i;j<=5;j++)
        {
            if(i == j || j == 5 )
            {
                cout << "*" <<" ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}