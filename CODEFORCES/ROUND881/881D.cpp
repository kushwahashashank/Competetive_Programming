#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dfs(vector<ll int> &dp, map<ll int, set<ll int>> &m, ll int x, ll int p)
{
    if (m[x].size() == 1)
    {
        for (auto s : m[x])
        {
            if (s == p)
            {
                return dp[x] = 1;
            }
        }
    }
    ll int ans = 0;
    for (auto i : m[x])
    {
        if (i != p)
        {
            ans += dfs(dp, m, i, x);
        }
    }
    return dp[x] = ans;
}
int main()
{
    ll int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n;
        cin >> n;
        vector<pair<ll int, ll int>> t;
        map<ll int, set<ll int>> m;
        for (ll int i = 0; i < n - 1; i++)
        {
            ll int a, b;
            cin >> a >> b;
            m[a].insert(b);
            m[b].insert(a);
        }
        int q;
        cin >> q;
        for (ll int i = 0; i < q; i++)
        {
            ll int a, b;
            cin >> a >> b;
            t.push_back({a, b});
        }
        vector<ll int> dp(n + 1, 0);
        ll int x = dfs(dp, m, 1, -1);
        for (ll int i = 0; i < q; i++)
        {
            cout << dp[t[i].first] * dp[t[i].second] << endl;
        }
    }
    return 0;
}