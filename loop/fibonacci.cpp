#include <iostream>

using namespace std;

int main()
{

    long long int first = 0, second = 1, third, i = 0, num;

    cout << "Enter your choice of fibonacci series : ";

    cin >> num;

    cout << "Fibonacci Series !" << endl;

    while (i < num)
    {
        third = first + second;
        cout << third << " ";
        first = second;
        second = third;
        i++;
    }
    return 0;
}

// 0, 1, 1,

// 2,3`