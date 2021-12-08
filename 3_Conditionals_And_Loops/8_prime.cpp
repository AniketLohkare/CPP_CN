#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter number" << endl;
    cin >> N;
    int div = 2;
    bool divided = false;

    while (div < N)
    {
        if (N % div == 0)
        {
            cout << "Not Prime" << endl;
            divided = true;
        }
        div = div + 1;
    }

        if (!divided)
        {
            cout << "Prime" << endl;
        }
    
}