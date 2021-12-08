#include <iostream>
using namespace std;
int main()
{
    int first_num, second_num, third_num;
    cout<< "Enter first number : ";
    cin >> first_num;
    cout << "Enter second number : ";
    cin >> second_num;
    cout << "Enter third number : ";
    cin >> third_num;

    int avg = (first_num + second_num + third_num) / 3;
    cout << "Average = " << avg;
}