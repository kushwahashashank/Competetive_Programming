#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        ll int ans = 0;
        if (xb <= xa && xc <= xa)
        {
            ans += min(xa - xb, xa - xc);
        }
        if (xb >= xa && xc >= xa)
        {
            ans += min(-xa + xb, -xa + xc);
        }
        if (yb <= ya && yc <= ya)
        {
            ans += min(ya - yb, ya - yc);
        }
        if (yb >= ya && yc >= ya)
        {
            ans += min(-ya + yb, -ya + yc);
        }
        cout << ans + 1 << endl;
    }
    return 0;
}