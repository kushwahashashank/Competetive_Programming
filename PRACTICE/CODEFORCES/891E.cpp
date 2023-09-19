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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n + 1);
        vector<ll> a(n + 1);
        ll s1 = 0, s2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            s2 += v[i].first;
        }
        sort(v.begin() + 1, v.end());
        for (int i = 1; i <= n; i++)
        {
            s2 -= v[i].first;
            s1 += v[i].first;
            a[v[i].second] = n + 1ll * v[i].first * (2 * i - n) - s1 + s2;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
