#include <iostream>

using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseCompleteString(char input[])
{
    int start = 0, end = length(input) - 1;
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseWord(char input[], int start, int end)
{
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[])
{
    reverseCompleteString(input);
    int start = 0, end = 0, i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            end = i - 1;
            reverseWord(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverseWord(input, start, end);
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
