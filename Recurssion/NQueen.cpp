#include <iostream>
using namespace std;

bool is_safe(int **arr, int row, int col, int n_queen)
{
    for (int i = 0; i < row; i++) //.    Check row wise
    {
        if (arr[i][col] == 1)
            return false;
    }

    int i = row, j = col;

    while (i >= 0 && j >= 0) //.      Upper left diagonal
    {
        if (arr[i][j] == 1)
            return false;

        i--;
        j--;
    }

    i = row;
    j = col;

    while (i >= 0 && j < n_queen) //.      Upper right diagonal
    {
        if (arr[i][j] == 1)
            return false;

        i--;
        j++;
    }

    return true;
}

bool N_Queen(int **arr, int row, int n_queen)
{
    if (row >= n_queen) //.     Base Case
        return true;

    for (int col = 0; col < n_queen; col++)
    {
        if (is_safe(arr, row, col, n_queen)) //.      Find right position
        {
            arr[row][col] = 1;

            if (N_Queen(arr, row + 1, n_queen)) //.    Checking next row
                return true;                    //.            If all good then return true

            arr[row][col] = 0; //.     BACKTRACKING --> If no position present then reset value
        }
    }
    return false;
}

int main()
{
    cout << "Enter value of N " << endl;
    int n;
    cin >> n;

    int **arr = new int *[n]; //.   N*N array

    for (int i = 0; i < n; i++) //.    Assigning values to zero
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }

    if (N_Queen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout<<endl;
        }
    }

    return 0;
}