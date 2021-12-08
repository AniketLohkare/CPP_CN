#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int i = 0, num = 1;

    for (num = 1; num <= n; num++)
    {
        if (num % 2 != 0)
        {
            arr[i] = num;
            i++;
        }
    }

    for (num = n; num > 0; num--)
    {
        if (num % 2 == 0)
        {
            arr[i] = num;
            i++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}