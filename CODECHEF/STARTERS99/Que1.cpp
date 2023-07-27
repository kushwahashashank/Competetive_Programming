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
        int x, y, r;
        cin >> x >> y >> r;
        int extra = r / 30;
        if ((extra + x) % y == 0)
        {
            cout << (extra + x) / y << endl;
        }
        else
        {
            cout << (extra + x + y) / y << endl;
        }
    }
    return 0;
}
