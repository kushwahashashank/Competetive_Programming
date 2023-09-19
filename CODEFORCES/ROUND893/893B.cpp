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
        ll n, m, d;
        cin >> n >> m >> d;
        vector<ll> v(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        v.insert(v.begin(), 1 - d);
        v.push_back(n + 1);
        vector<ll> res;
        ll ans = 1e10;
        for (int i = 1; i <= m; i++)
        {
            int A = v[i] - v[i - 1] - 1;
            int B = v[i + 1] - v[i] - 1;
            int C = v[i + 1] - v[i - 1] - 1;
            int D = C / d - (A / d + B / d);
            if (D < ans)
            {
                ans = D;
                res.clear();
            }
            if (D == ans)
            {
                res.push_back(v[i]);
            }
        }
        ll ans1 = 0;
        for (int i = 1; i < v.size(); i++)
        {
            ans1 += (v[i] - v[i - 1] - 1) / d;
        }
        ans1 += int(v.size()) - 3;
        cout << ans + ans1 << ' ' << res.size() << endl;
    }
    return 0;
}