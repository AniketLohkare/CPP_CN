#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            evenSum = evenSum + rem;
        }
        else
        {
            oddSum = oddSum + rem;
        }
        n = n / 10;
    }

    cout << evenSum << '\t' << oddSum;
}
