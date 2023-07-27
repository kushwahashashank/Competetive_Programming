#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int help(string &s, int i, int &n, int zero, ll int &m, ll int &ans)
{
    if (i >= n)
        return 0;
    ll int p = 0;
    ll int zr = 0;
    int zf = 0, er = 0;
    if (s[i] == '4')
    {
        p = help(s, i + 1, n, 0, m, ans);
        ans = (ans % m + p % m) % m;
        zr = zero + p;
        if (p > 0)
        {
            zr++;
        }
    }
    else if (s[i] == '0')
    {
        p = help(s, i + 1, n, zero + 1, m, ans);
        zr = p;
    }
    else
    {
        ll int x = help(s, i + 1, n, 0, m, ans);
        ll int y = help(s, i + 1, n, zero + 1, m, ans);
        ans = (ans % m + x % m) % m;
        p = x + y;
        zr = zero + p;
        if (x > 0)
        {
            zr++;
        }
    }
    return zr;
}
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll int m = 1e9 + 7;
        ll int ans = 0;
        ll int p = help(s, 1, n, 0, m, ans);
        cout << ans << endl;
    }
    return 0;
}