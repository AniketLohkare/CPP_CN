#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;

    int Largest = -999999;
    int i = 1;
    while (i <= N)
    {
        int num;
        cout << "Enter Number : ";
        cin >> num;
        if (num >= Largest)
        {
            Largest = num;
        }
        i = i + 1;
    }
    cout << Largest << " is Largest";
}