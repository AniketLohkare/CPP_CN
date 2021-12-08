#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    if (a == b)
    {
        cout << "The numbers are equal" << endl;
    }
    else
    {
        if (a > b)
        {
            cout << "a is greater" << endl;
        }
        else 
        {
            cout << "b is greater" << endl;
        }
    }
}
