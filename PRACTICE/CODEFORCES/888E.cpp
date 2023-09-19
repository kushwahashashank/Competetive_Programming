// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll help(int i, vector<vector<ll>> &v, vector<ll> &p, vector<ll> &c, vector<ll> &ans)
{
    ll res = c[i];
    if (p[i] == 1)
    {
        res = 0;
    }
    if (v[i].size() > 0)
    {
        ll temp = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (ans[v[i][j] - 1] != INT_MAX)
            {
                temp += ans[v[i][j] - 1];
            }
            else
            {
                temp += help(v[i][j] - 1, v, p, c, ans);
            }
        }
        res = min(res, temp);
    }
    return ans[i] = res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> c(n), p(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < k; i++)
        {
            int l;
            cin >> l;
            p[l - 1] = 1;
        }
        vector<vector<ll>> v;
        for (int i = 0; i < n; i++)
        {
            vector<ll> temp;
            ll x;
            cin >> x;
            for (int i = 0; i < x; i++)
            {
                int temp1;
                cin >> temp1;
                temp.push_back(temp1);
            }
            v.push_back(temp);
        }
        vector<ll> ans(n, INT_MAX);
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == INT_MAX)
            {
                ans[i] = help(i, v, p, c, ans);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
