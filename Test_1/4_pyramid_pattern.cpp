//    1
//   212
//  32123
// 4321234

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

        int j = 1;
        while (j <= i)
        {
            int n1 = i;
            while (n1 >= 1)
            {
                cout << n1;
                n1--;
                j++;
            }
            
            int j2 = 1;
            while (j2 <= i - 1)
            {
                int n2 = 2;
                while (n2 < j)
                {
                    cout << n2;
                    n2++;
                    j2++;
                }
            }
            
        }
        cout << endl;
        i++;
    }
}
