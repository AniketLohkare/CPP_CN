#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number = ";
    cin >> N;

    int i, div;
    bool isPrime;

    for (i = 2; i <= N; i++)
    {
        isPrime = true;

        for (div = 2; div < i; div++)
        {
            if (i % div == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true && N != 1)
        {
            cout << i << endl;
        }
    }
}