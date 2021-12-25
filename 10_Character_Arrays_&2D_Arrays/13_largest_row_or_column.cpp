#include <iostream>
using namespace std;
#include <climits>

void findLargest(int **input, int nRows, int mCols)
{
    int maxSum = INT_MIN, index = 0;
    bool isRow = true;

    for (int i = 0; i < nRows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < mCols; j++)
        {
            rowSum += input[i][j];
        }
        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            index = i;
        }
    }

    for (int j = 0; j < mCols; j++)
    {
        int colSum = 0;
        for (int i = 0; i < nRows; i++)
        {
            colSum += input[i][j];
        }

        if (colSum > maxSum)
        {
            isRow = false;
            maxSum = colSum;
            index = j;
        }
    }

    if (isRow)
    {
        cout << "row"
             << " ";
    }
    else
    {
        cout << "column"
             << " ";
    }
    cout << index << " " << maxSum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}