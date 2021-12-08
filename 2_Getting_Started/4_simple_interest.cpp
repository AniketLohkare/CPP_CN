# include <iostream>
using namespace std;
int main ()
{
    int principal =  10000;
    int rate = 15;
    int time = 2;
    int simple_interest = principal*rate*time/100;

    cout << simple_interest << endl;    
}