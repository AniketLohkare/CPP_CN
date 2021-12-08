#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int basic;
    cin >> basic;
    char grade;
    cin >> grade;

    double hra = 0.20 * basic;
    double da = 0.50 * basic;

    int allow;
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    double pf = 0.11 * basic;

    double totalSalary;
    totalSalary = basic + hra + da + allow - pf;
    cout << int(round(totalSalary));
}
