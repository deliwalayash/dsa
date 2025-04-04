#include <iostream>

using namespace std;

bool isPrime(int);

int main()
{

    int num;
    cout << "Enter any number:";
    cin >> num;

    if (isPrime(num) == true)
    {
        cout << "Its a prime number";
    }
    else
    {
        cout << "It is not a prime number";
    }
}

bool isPrime(int b)
{

    int  i;
    bool flag = true;

    for (i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}