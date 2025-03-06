#include<iostream>

using namespace std;

int main(){
   

    int n,lastdigit=0,firstdigit=0;

    cout << "Enter Any Number" << endl;

    cin >> n;



    lastdigit=n % 10;
    n=n/10;

   

    while (n!=0)
    {
      firstdigit=n % 10;
      n=n/10;   
    }
    
    
    cout<< "Sum of first and last digit is:"<< firstdigit+ lastdigit;

    return 0;
}