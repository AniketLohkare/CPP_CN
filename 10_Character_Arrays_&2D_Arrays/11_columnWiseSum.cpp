#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int input[M][N];

    for (int row = 0; row < M; row++)
    {
        for (int column = 0; column < N; column++)
        {
            cin >> input[row][column];
        }
    }

    for (int column = 0; column < N; column++)
    {
        int sum = 0;
        for (int row = 0; row < M; row++)
        {
            sum = sum + input[row][column];
        }
        cout << sum << ' ';
    }
}