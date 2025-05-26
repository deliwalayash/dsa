#include <iostream>
using namespace std;

int b;

int fibrec(int n){

    if(n == 0){
        return 0;
    }if(n == 1){
        return fibrec(n - 1) + fibrec(n - 2);
    }     
    
};

int main()
{   int n;
    cout << "Enter number:";
    cin >> n;
    int fd = 0, nd = 1;
    cout << fd << " " << nd << " ";
    for (int i = 0; i < n - 2; i++)
    {
        int ld = fd + nd;
        cout << ld << " ";
        fd = nd;
        nd = ld;
    }
}