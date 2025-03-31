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
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == 2 || j == 2)
              {  cout << arr[i][j] << " ";}
              else{
                cout << "  ";
              }
        }
        cout << endl;
    }
}