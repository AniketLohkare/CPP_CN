#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    a += 3;
    a *= 2;
    cout << --a << endl; // 10 - 1 = 9 will print
    cout << a-- << endl; // 9 will print first then -1 will done
}