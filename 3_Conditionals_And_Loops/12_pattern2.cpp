// 1
// 23
// 456
// 78910

#include <iostream>
using namespace std;
int main()
{
    int Number_of_rows;
    cout << "Enter Number Of Roows" << endl;
    cin >> Number_of_rows;

    int i = 1;                      // i is row which is to be print
    int val = 1;                  
    while(i <= Number_of_rows)
    {
        int j = 1;                // j is number which is to be print in row
        while(j <= i)            // check whether j is to be print or not
        {
            cout << val;
            j = j + 1;           // next number to be printed
            val = val + 1;
        }
        cout << endl;            // Enter for next row
        i = i + 1;               // next row to be printed
    }
}