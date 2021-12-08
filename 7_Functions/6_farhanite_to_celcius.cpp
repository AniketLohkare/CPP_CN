#include <iostream>
using namespace std;

int far_to_cel(int s, int e, int w)
{
    int ans;
    for (int i = s; i <= e; i += w)
    {
        ans = (5 * (i - 32)) / 9;
        cout << i << '\t' << ans << endl;;
    }
}

int main()
{
    int s, e, w;
    cin >> s >> e >> w;
    cout << far_to_cel(s, e, w);
}