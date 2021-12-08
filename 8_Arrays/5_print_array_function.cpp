#include <iostream>
using namespace std;
void print_Array(int input[] , int n)
{
    cout << "function : " << sizeof(input) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << "main : " << sizeof(input) << endl;
    print_Array(input, n);
}