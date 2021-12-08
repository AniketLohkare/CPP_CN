#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 1;
    int sum = 0;

    while (i <= N)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }

    if (i > N)
    {
        cout << sum << endl;
    }
}