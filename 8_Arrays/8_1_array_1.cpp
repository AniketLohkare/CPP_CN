#include <iostream>
using namespace std;

void print_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = 1;
        cout << array[i] << endl;
    }
}

int main()
{
    int  array [10] = {1};
    print_array(array, 10);
}

