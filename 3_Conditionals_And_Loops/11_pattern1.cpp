// 1
// 12
// 123
// 1234


#include <iostream>
using namespace std;
int main()
{
    int Number_of_rows;
    cout << "Enter Number Of Roows" << endl;
    cin >> Number_of_rows;

    int i = 1; // i is row which is to be print
    while(i <= Number_of_rows)
    {
        int j = 1; // j is number which is to be print in row
        while(j <= i) // check whether j is to be print or not
        {
            cout << j;
            j = j + 1;  // next number to be printed
        }
        cout << endl; // Enter for next row
        i = i + 1; // next row to be printed
    }
}