#include <iostream>
#include <cstring>
using namespace std;
#include <string.h>

bool checkPalindrome(char str[])
{
    int i = 0, j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
    }
    return true;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}