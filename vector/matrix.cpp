#include <iostream>

#include <vector>

using namespace std;

int main()
{

    vector<int> v1(3, 0);

    vector<vector<int>> v2(3, v1);

    for(int i = 0; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << "Enter Elements:";
            cin >> v2[i][j];
        }
    }

    for(int i = 0; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }

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