#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {1, 3, 3, 3, 5, 4,4,4,2,1,0};
    int temp[5] = {}, maxVal = 0, maxId = 0;

    for (int val : arr)
    {
        temp[val]++;
    }

    for (int val : temp)
    {
        cout << val ;
    }

  

    for (int i = 1; i <= 5; i++)
    {
        if (maxVal < temp[i])
        {
            maxId = i;
            maxVal = temp[i];
        }
    }

    cout << endl << endl;

    cout << maxId;

    return 0;
}