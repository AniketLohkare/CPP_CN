#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string getCompressedString(string str)
{
    string arr = "";
    int count = 1;
    int j = 0;

    for (int i = 1; i <= str.length(); i++)
    {
        if (str[i] == str[j])
        {
            count++;
        }
        else
        {
            arr = arr + str[j];
            if (count > 1)
            {
                char ch = 48 + count;
                arr = arr + ch;
            }
            j = i;
            count = 1;
        }
    }
    return arr;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}