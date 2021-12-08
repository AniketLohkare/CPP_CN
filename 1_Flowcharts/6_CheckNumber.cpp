#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number : ";
    cin >> N;

    if (N > 0)
    {
        cout << "1";
    }
    else if (N < 0)
    {
        cout << "-1";
    }
    else
    {
        cout << "0";
    }
}