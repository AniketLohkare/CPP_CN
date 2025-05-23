#include <iostream>
#include <algorithm>
using namespace std;
#include <climits>

void intersection(int *input1, int *input2, int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int a = input1[i];
        int count = 0;

        for (int j = 0; j < size2; j++)
        {
            if (a == input2[j])
            {
                count = 1;
                input2[j] = INT_MAX;
                break;
            }
        }

        if (count == 1)
        {
            cout << input1[i] << ' ';
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size1, size2;

        cin >> size1;
        int *input1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> input1[i];
        }

        cin >> size2;
        int *input2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, size1, size2);

        delete[] input1;
        delete[] input2;

        cout << endl;
    }

    return 0;
}