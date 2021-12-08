#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;

    int i = 1, sum = 0;

    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Sum = " << sum;
}