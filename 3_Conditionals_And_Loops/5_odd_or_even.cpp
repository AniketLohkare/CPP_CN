#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the number" << endl;
    cin >> N;
    if (N % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}