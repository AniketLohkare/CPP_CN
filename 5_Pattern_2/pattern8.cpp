//   *
//  ***
// *****
//  ***
//   *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int n1 = (n / 2) + 1;
    int n2 = (n / 2);

    int i = 1;
    while (i <= n1)
    {
        int spaces = 1;
        while (spaces <= n1 - i)
        {
            cout << ' ';
            spaces = spaces + 1;
        }

        int stars = 1;
        while (stars <= 2 * i - 1)
        {
            cout << '*';
            stars = stars + 1;
        }
        cout << endl;
        i = i + 1;
    }

    i = 1;
    while (i <= n2)
    {
        int spaces = 1;
        while (spaces <= i)
        {
            cout << ' ';
            spaces = spaces + 1;
        }

        int stars = 1;
        while (stars <= (((2 * n2) - (2 * i)) + 1))
        {
            cout << '*';
            stars = stars + 1;
        }

        cout << endl;
        i = i + 1;
    }
}
