#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);

    vector<int> v2(n);
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elemnts:";
        cin >> v1[i];
    }

    for (i = 0; i < n; i++)
    {
        v2[i] = v1[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}
