#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool divided = false;
    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            divided = true;
            break;
        }
    }

    if (divided == true)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "Prime number" << endl;
    }
}