#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N = ";
    cin >> N;

    int a = 0, b = 1;

    while (a <= N)
    {
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;
    }
}