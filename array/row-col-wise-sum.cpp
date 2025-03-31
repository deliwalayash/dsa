#include <iostream>

using namespace std;

int main()
{
    int row, col;

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

    int row_num,col_num,sum = 0;

    cout << "Enter row number you want to sum :";
    cin >> row_num;

    for(int i = 0; i < row; i++){
        sum = sum + arr[row_num - 1][i];
    }
    cout << sum << endl;

    sum = 0;

    cout << "Enter col number you want to sum :";
    cin >> col_num;

    for(int i = 0; i < col; i++){
        sum = sum + arr[i][col_num - 1];
    }
    cout << sum;
}