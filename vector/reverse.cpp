#include <iostream>

#include <vector>

using namespace std;

int main()
{

    vector<int> v1 = {5, 6, 7, 8, 9, 10, 11};

    vector<int> v2;

    int i;
    int n = v1.size() - 1;

    for (i = 0; i < v1.size(); i++)
    {
        v2[i] = v1[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}
