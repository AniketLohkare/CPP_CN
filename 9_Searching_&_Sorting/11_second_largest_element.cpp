#include <iostream>
using namespace std;

#include <climits>

int findSecondLargest(int *input, int n)
{
    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            second_largest = largest;
            largest = input[i];
        }

        if (input[i] < largest && input[i] > second_largest)
        {
            second_largest = input[i];
        }
    }

    return second_largest;
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

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}