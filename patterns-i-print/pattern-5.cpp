#include<iostream>

using namespace std;

int main(){

    int i,j;

    for (i=5;i<10;i++)
    {   
        for (j=5;j<=i;j++)
        {
            cout << ((j % 2 ==0) ? '0' : '1') << " ";
        }

        cout << endl;
    }
}


// 1  
// 1 0  
// 1 0 1  
// 1 0 1 0  
// 1 0 1 0 1  

