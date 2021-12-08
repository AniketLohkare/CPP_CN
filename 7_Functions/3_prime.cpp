#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
   int ans = isPrime(n);
   cout << ans;
}