// binary to decimal
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0, pv = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans + lastDigit * pv;
        pv = pv * 2;
        n = n / 10;
    }
    cout << ans;
}