#include <iostream>

#include <vector>

using namespace std;

int main()
{

    vector<int> v1(3, 0);

    vector<vector<int>> v2(3, v1);

    for (vector<int> arr : v2)
    {
        for (int val : v1)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}