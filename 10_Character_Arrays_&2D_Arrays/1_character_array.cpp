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

int main()
{
    char name[100];
    cout << "Enter Your Name : ";
    cin >> name;

    // name[4] = 'x';
    // name[3] = 'd';
    // name[1] = '\0';

    cout << "Your Name Is " << name << endl;
    cout << "Length is " << length(name);
}