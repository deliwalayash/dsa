#include<iostream>

using namespace std;

int main(){

    int i,j,s;

    for (i=5;i>=1;i--)
    {   
        for(s=i;s<=4;s++){
            cout << "  ";
        }
        for (j=1;j<=i;j++)
        {
            cout << j << " ";
            
        }

        cout << endl;
    }
}

// 1 2 3 4 5 
//   1 2 3 4
//     1 2 3
//       1 2
//         1