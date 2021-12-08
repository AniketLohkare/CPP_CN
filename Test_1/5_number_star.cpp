// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        int stars = 1;
        while (stars <= i - 1)
        {
            cout << '*';
            stars++;
        }

        int j2 = 1;
        while (j2 <= i - 1)
        {
            cout << '*';
            j2++;
        }

        int n3 = n - i + 1;

        while (n3 >= 1)
        {
            cout << n3;
            n3--;
                }

        cout << endl;
        i++;
    }
}