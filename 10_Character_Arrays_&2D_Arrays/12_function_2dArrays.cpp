#include <iostream>
using namespace std;

void printArray(int array[][5], int M, int N)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{

    int a[5][5] = {{1, 2}, {3, 4}};
    printArray(a, 5, 5);

    // int input[100][100];
    // int M, N;
    // cin >> M >> N;

    // for (int i = 0; i < M; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cin >> input[i][j];
    //     }
    // }

    // printArray(input, M, N);
}
