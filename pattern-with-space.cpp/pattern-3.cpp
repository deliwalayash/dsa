#include<iostream>

using namespace std;

int main(){

    int i,j,s;

    for (i=1;i<=5;i++)
    {   
       for (s=i;s<=4;s++){
        cout << "  "; // in pyramid here use only single space
       }
        for (j=i;j>=1;j--)
        {
            cout << j << " ";
            
        }

        cout << endl;
    }
}

// 5 4 3 2 1 
//  4 3 2 1
//   3 2 1
//    2 1
//     1