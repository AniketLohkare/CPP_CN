#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort012(int *arr, int n)
{
    int l = 0, m = 0, h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[m], arr[l]);
            l++;
            m++;
        }

        else if (arr[m] == 1)
        {
            m++;
        }

        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;

        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort012(arr, size);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
        cout << endl;
    }

    return 0;
}