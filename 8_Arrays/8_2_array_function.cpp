#include <iostream>
using namespace std;

void print_array(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int input[100] = {1, 2, 3};

    print_array(input, 100);
}