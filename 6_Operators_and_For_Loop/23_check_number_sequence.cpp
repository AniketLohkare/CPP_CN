#include <iostream>
using namespace std;

int main()
{
    bool decreasing = false;
    int n, n1, n2;
    cin >> n;
    cin >> n1;
    for (int i = 1; i < n; i++)
    {
        cin >> n2;
        if (n1 > n2 && decreasing == true)
        {
            cout << "false";
            return 0;
        }
        else if (n1 == n2)
        {
            cout << "false";
            return 0;
        }
        else if (n2 > n1 && decreasing == false)
        {
            decreasing = true;
        }
        n1 = n2;
    }
    cout << "true";
}
