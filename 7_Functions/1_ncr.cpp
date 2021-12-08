#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;

    int n_factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        n_factorial = n_factorial * i;
    }

    int r_factorial = 1;
    for (int i = 1; i <= r; i++)
    {
        r_factorial = r_factorial * i;
    }

    int n_r_factorial = 1;
    for (int i = 1; i <= n - r; i++)
    {
        n_r_factorial = n_r_factorial * i;
    }

    cout << n_factorial / (r_factorial * n_r_factorial) << endl;
}