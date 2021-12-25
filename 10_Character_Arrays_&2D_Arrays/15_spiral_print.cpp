#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int row_start = 0, row_end = nRows - 1, col_start = 0, col_end = nCols - 1;
    int i, count = 0;

    while (count < nRows * nCols)
    {
        for (i = col_start; i <= col_end; i++)
        {
            cout << input[row_start][i] << " ";
            count++;
        }
        row_start++;

        for (i = row_start; i <= row_end; i++)
        {
            cout << input[i][col_end] << " ";
            count++;
        }
        col_end--;

        for (i = col_end; i >= col_start; i--)
        {
            cout << input[row_end][i] << " ";
            count++;
        }
        row_end--;

        for (i = row_end; i >= row_start; i--)
        {
            cout << input[i][col_start] << " ";
            count++;
        }
        col_start++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}