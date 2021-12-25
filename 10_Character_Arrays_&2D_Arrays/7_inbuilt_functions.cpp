#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char input1[100] = "abcd";
    char input2[100] = "xy";

    cout << "Before copying : ";
    cout << "input1 : " << input1 << endl;
    cout << "input2 : " << input2 << endl;

    // strcpy(input1, "ani");

    strncpy(input1, input2, 4);

    cout << "After copying : ";
    cout << "input1 : " << input1 << endl;
    cout << "input2 : " << input2 << endl;

    /*
    if (strcmp(input1, input2) == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    */

    /*
     int len = strlen(input);
     cout << "Length : " << len << endl;
     */
}
