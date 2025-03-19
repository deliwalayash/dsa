#include<iostream>

using namespace std;

int main(){
    int i,j;
    

    for(i=1;i<=5;i++)
    { char ch ='A';
        for(j=5;j>=i;j--){
            cout << ch << " ";
            ch++;
        }

        cout<< endl;
    }
}

// A B C D E  
// A B C D  
// A B C  
// A B  
// A  
