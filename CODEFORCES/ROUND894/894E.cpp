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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        multiset<int> s;
        ll sum = 0;
        ll ans = -1e9;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= 0)
            {
                continue;
            }
            sum += v[i];
            s.insert(v[i]);
            if ((int)s.size() > m)
            {
                sum -= *s.begin();
                s.erase(s.begin());
            }
            ans = max(sum - 1LL * (i + 1) * d, ans);
        }
        cout << max(ans, 0LL) << endl;
    }
    return 0;
}