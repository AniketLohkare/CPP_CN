#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    char lastChar = input[0];
    int nextIndex = 1;

    for (int i = 0; input[i] != '\0';)
    {
        if (input[i] != lastChar)
        {
            input[nextIndex] = input[i];
            lastChar = input[i];
            nextIndex++;
            i++;
        }
        else
        {
            i++;
        }
    }
    input[nextIndex] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
