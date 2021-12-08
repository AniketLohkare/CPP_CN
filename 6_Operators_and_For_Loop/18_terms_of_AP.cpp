#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int AP;

    for (int i = 1; i <= n; i++)
    {
        AP = 3 * i + 2;

        if (AP % 4 != 0)
        {
            cout << AP << ' ';
        }
        else
        {
            n++;
        }
    }
}
