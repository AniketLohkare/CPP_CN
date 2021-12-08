#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
    }

    int i, ans;
    for (i = 1; i < n; i++)
    {
        ans = i * i;

        if (ans == n)
        {
            cout << i;
            break;
        }

        if (ans > n)
        {
            cout << i - 1;
            break;
        }
    }
}
