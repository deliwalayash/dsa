#include <iostream>

using namespace std;

int main()
{
    int row, col, sum = 0;

    cout << "Enter row & col" << endl;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter elements of array: [" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int k = 0; k < row; k++)
    {
        cout << arr[k][k] << " ";
    }

    for (int k = 0; k < row; k++)
    {
        cout << arr[k][col - k - 1] << " ";
    }
}