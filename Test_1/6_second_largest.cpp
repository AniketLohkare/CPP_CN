#include <iostream>
using namespace std;
#include <climits>

int main()
{

    int t;
    cin >> t;

    int max = 0, second_max = 0;

    while (t != 0)
    {
        int n;
        cin >> n;

        if (n > max)
        {
            max = n;
        }
        else
        {
            t--;
        }

        if (n > second_max && n < max)
        {
            second_max = n;
        }
        else
        {
            t--;
        }
        t--;
    }
    cout << second_max;
}
