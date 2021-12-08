#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;

    int Product = 1;
    int i = 1;

    while (i <= N)
    {
        Product = Product * i;
        i = i + 1;
    }
    cout << "Product = " << Product;
}