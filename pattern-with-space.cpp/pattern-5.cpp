#include<iostream>

using namespace std;

int main(){

    int i,j,s,l,m,s2;

    for (i=1;i<=5;i++)
    {   
        for (s=i;s<=4;s++){
            cout << " ";
        }
        for (j=1;j<=i;j++)
        {
            cout << j << " ";
            
        }

        cout << endl;
    }
    for(l=4;l>=1;l--){
        for (s2=l; s2 < 4 ;s2++)
            {
                cout << " ";
            }
        for(m=1;m<=l;m++){
            cout << " " << m ;
        }
        cout << endl;
    }
    return 0;
}


