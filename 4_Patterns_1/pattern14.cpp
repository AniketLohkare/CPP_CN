// A
// BC
// CDE
// DEFG

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        char start = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            char ch = start + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}