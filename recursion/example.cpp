#include <iostream>
using namespace std;

int fibrec(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibrec(n - 1) + fibrec(n - 2);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms:\n";
    for (int i = 0; i < n; i++)
    {
        cout << fibrec(i) << " ";
    }
    cout << endl;

    cout << "The " << n << "th Fibonacci number is: " << fibrec(n) << endl;

    return 0;
}