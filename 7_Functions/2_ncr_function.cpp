#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << ans;
}