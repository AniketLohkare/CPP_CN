#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int val)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (val == arr [mid])
        {
            return mid;
        }

        else if (val > arr [mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    cin >> size;

    int input[100];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int val;
    cin >> val;

    cout << binary_search(input, size, val);
}