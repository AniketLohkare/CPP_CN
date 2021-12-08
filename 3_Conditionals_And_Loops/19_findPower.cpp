#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    int i = 1;
    int ans = 1;
    while (i <= n)
    {
        ans = ans * x;
        i = i + 1;
    }

    cout << ans;
}
