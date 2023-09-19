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
        ll int a, b, c;
        cin >> a >> b >> c;
        string ans;
        if (a == b)
        {
            if (c % 2 == 1)
            {
                ans = "First";
            }
            else
            {
                ans = "Second";
            }
        }
        else
        {
            a += c;
            b += c;
            if (a > b)
            {
                ans = "First";
            }
            else
            {
                ans = "Second";
            }
        }

        cout << ans << endl;
    }
    return 0;
}
