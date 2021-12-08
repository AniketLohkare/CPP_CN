#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int c;
    cin >> c;

    int sum = 0;
    if (c == 1)
    {
        for (int i = 0; i <= N; i++)
        {
            sum = sum + i;
        }
        cout << sum;
    }

    int product = 1;
    if (c == 2)
    {
        for (int i = 1; i <= N; i++)
        {
            product = product * i;
        }
        cout << product;
    }

    if (c != 1 && c != 2)
    {
        cout << -1;
    }
}
