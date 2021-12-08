#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "Enter A : ";
    cin >> A;
    cout << "Enter B : ";
    cin >> B;
    cout << "Enter C : ";
    cin >> C;

    if (A + B > C && B + C > A && A + C > B)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}