#include <iostream>
using namespace std;
int main()
{
    int principle, rate, time;
    cout << "Enter principle : ";
    cin >> principle;
    cout << "Enter rate : ";
    cin >> rate;
    cout << "Enter time : ";
    cin >> time;
    int simple_interest = principle * rate * time / 100;
    cout << "Simple interest = " << simple_interest ;


}   