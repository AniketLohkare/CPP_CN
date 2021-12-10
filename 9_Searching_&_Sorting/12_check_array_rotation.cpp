#include <iostream>
using namespace std;

#include <climits>

int arrayRotateCheck(int *input, int size)
{
    int compare = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (input[i] > compare)
        {
            compare = input[i];
        }
        else
        {
            return i;
            break;
        }
    }
    return 0;
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

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}