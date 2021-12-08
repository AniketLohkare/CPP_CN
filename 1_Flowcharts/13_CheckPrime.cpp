#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    int div = 2;

    while (div < N)
    {
        if (N % div == 0)
        {
            cout << N << " is not Prime" << endl;
            break;
        }

        div = div + 1;
    }
    if (div == N)
    {
        cout << N << " is Prime" << endl;
    }
}