#include<iostream>

using namespace std;

int main(){

    int i,j;

    for (i=1;i<=5;i++)
    {   
        for(int s=i;s<5;s++)
        {
            cout << "  ";
        }
      
        for (j=1;j<=i;j++)
        {
            cout << j << " ";
            
        }

        cout << endl;
    }
}

//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
