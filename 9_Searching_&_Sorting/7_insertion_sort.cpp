#include <iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int current = array[i];
        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (current < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }

        array[j + 1] = current;
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

        insertionSort(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}