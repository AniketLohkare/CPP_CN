#include <iostream>
using namespace std;

int main()
{
    char i;
    cin >> i;

    if (i >= 'A' && i <= 'Z')
    {
        cout << "1" << endl;
    }

    else if (i >= 'a' && i <= 'z')
    {
        cout << "0" << endl;
    }

    else
    {
        cout << "-1" << endl;
    }
}
