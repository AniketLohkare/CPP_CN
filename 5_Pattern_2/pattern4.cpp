// 4444
// 333
// 22
// 1

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
            int val = n - i + 1;
            cout << val;

            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}