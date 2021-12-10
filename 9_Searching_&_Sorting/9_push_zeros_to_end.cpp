#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void pushZeroesEnd(int *input, int size)
{
    int i = 0, j = 0;

    while (i < size)
    {
        if (input[i] != 0)
        {
            swap(input[i], input[j]);
            i++;
            j++;
        }

        else
        {
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

        int size;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        pushZeroesEnd(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}