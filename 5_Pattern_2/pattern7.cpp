//     1
//    232
//   34543
//  4567654

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << ' ';
            spaces = spaces + 1;
        }

        int num = 1;
        int val = i;
        while (num <= i)
        {
            cout << val;
            val = val + 1;
            num = num + 1;
        }

        val = val - 2; // reduce val by 2 as it went to +1 for checking <= i
        num = i - 1;
        while (num >= 1)
        {
            cout << val;
            val = val - 1;
            num = num - 1;
        }

        cout << endl;
        i = i + 1;
    }
}