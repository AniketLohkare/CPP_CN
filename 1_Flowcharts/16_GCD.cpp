#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "Enter Two Numbers";
    cin >> A >> B;

    int i = 1, GCD = 0;
    while (i <= A || i <= B)
    {

        if (A % i == 0 && B % i == 0)
        {
            GCD = i;
        }
        i = i + 1;
    }
    cout << "GCD = " << GCD;
}