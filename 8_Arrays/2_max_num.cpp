#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int numbers[100];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    cout << "Max = " << max << endl;
}