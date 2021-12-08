#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int a = arr[i];
        int count = 1;

        for (int i = 0; i < size; i++)
        {
            if (a == arr[i])
            {
                count++;
            }
        }

        if (count == 3)
        {
            return arr[i];
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

        cout << duplicateNumber(input, size) << endl;
    }

    return 0;
}