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
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        ll ans = 0;
        ll x = m / k;
        x = min(x, ak);
        m -= (x * k);
        if (m > a1)
        {
            ll w = m % k;
            if (a1 >= w)
            {
                m -= w;
                a1 -= w;
            }
            ll l = a1 / k;
            m -= l * k;
            a1 -= l * k;
            if (m > 0)
            {
                ans += m / k;
                m -= ((m / k) * k);
            }
            if (a1 > 0)
            {
                m -= a1;
            }
            ans += max(m, (ll)0);
        }
        cout << ans << endl;
    }
    return 0;
}
