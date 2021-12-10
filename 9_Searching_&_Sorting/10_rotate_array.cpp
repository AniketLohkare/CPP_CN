#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void reverse(int input[], int a, int b)
{
    for (int i = a; i < b; i++)
    {
        swap(input[i], input[b - 1]);
        b--;
    }
}

void rotate(int *input, int d, int n)
{
    reverse(input, 0, d); // reverse from 0 ts d
    reverse(input, d, n); // reverse from d to n
    reverse(input, 0, n); // reverse again the whole array
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}