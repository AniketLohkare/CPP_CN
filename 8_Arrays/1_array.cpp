#include <iostream>
using namespace std;
int main()
{
    int n; // n is size of array;
    cin >> n;

    int input[100]; // array with name input and length 100 (constant)

    for (int i = 0; i < n; i++) // i is index of array
    {
        cin >> input[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}