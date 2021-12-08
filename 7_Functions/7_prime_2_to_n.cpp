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
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i))
        {
            cout << i << endl;
        }
    }
}