#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[])
{
    char highest;
    int max = -1;

    int freq[256] = {0};

    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        freq[input[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (freq[input[i]] > max)
        {
            max = freq[input[i]];
            highest = input[i];
        }
    }
    return highest;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}