#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;

    if (A == B && B == C && A == C)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if (A == B || B == C || A == C)
    {
        cout << "Isoscelece Trianle" << endl;
    }
    else
    {
        cout << "Scalene Triangle" << endl;
    }
}