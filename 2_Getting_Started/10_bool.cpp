#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter The Numbers" << endl;
    cin >> a >> b;

    bool IsEqual = (a == b);
    bool aIsGreater = (a > b);
    bool bIsGreater = (b > a);

    cout << "Are they equal " << IsEqual <<endl;
    cout << "Is a Is Greater " << aIsGreater << endl;
    cout << "Is b Is Greater " << bIsGreater << endl;
}