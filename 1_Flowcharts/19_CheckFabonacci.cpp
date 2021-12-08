#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number = ";
    cin >> N;

    int a = 0, b = 1;
    bool isFabonacci;

    while (a <= N)
    {

        int c = a + b;
        a = b;
        b = c;
        if (a == N || N == 0 || N == 1)
        {
            cout << N << " is Fabonacci Number ";
            isFabonacci = true;
        }
    }
    if (isFabonacci != true && N != 0 )
    {
        cout << N << " is not Faabonacci Number";
    }
}