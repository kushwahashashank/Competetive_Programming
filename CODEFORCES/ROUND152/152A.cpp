// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        int s = c + h;
        if (b > s)
        {
            cout << 2 * s + 1 << endl;
        }
        else
        {
            cout << 2 * b - 1 << endl;
        }
    }
    return 0;
}
