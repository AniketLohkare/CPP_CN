#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int numbers[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }

    cout << "sum = " << sum << endl;
}