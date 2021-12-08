#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        for (int d = 2; d <= n; d++)
        {
            if (d == i)
            {
                cout << i << endl;
            }
            if (i % d == 0)
            {
                break;
            }
                }
    }
}