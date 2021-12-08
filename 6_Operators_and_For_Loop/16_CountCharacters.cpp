#include <iostream>
using namespace std;

int main()
{

    char c;
    int n;
    c = cin.get();

    int alphabate_count = 0;
    int digit_count = 0;
    int space_count = 0;

    while (c != '$')
    {

        if (c >= 'a' && c <= 'z')
        {
            alphabate_count++;
        }

        else if (c >= '0' && c <= '9')
        {
            digit_count++;
        }

        else if (c == ' ' || c == '\t' || c == '\n')
        {
            space_count++;
        }

        c = cin.get();
    }
    cout << alphabate_count << '\t' << digit_count << '\t' << space_count;
}
