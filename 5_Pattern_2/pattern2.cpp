//    1 
//   12
//  123
// 1234

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while(space <= n - i)
        {
            cout << ' ';
            space++;
        }
        int k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }
        cout << endl;
        i++;
    }
}