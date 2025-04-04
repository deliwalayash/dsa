#include <iostream>

using namespace std;

int isPrime(int);

int main()
{

    int n;
    cout << "Enter number upto which youn want to print prime number:";
    cin >> n;

    cout << isPrime(n);

    return 0;
}

int isPrime(int n)
{

    
   
    for (int i = 2; i < n; i++)
    {
        bool flag = false;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << i << " ";
        }
    }
}