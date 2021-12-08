#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number : ";
    cin >> N;

    int sum = 0;
    int i = 1;

    while (i <= N)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum is : " << sum;
}