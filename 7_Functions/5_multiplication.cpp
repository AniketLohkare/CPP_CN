#include <iostream>
using namespace std;
int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = multiplication(a, b);
    cout << ans;
}