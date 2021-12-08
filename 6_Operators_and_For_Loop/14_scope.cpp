#include <iostream>
using namespace std;
int main()
{
    int i = 100;
    if (i == 100)
    {
        int j = 12;
        cout << j;
    }
    // cout << j;             j is not available

    int k = 1;
    while (k <= 100)
    {
        int a = 144;
        k++;
    }

    // cout << a ;         a is not available
}