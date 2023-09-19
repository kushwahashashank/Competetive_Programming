// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPermutation(vector<int ll> a, ll int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= 0 || a[i] > n)
        {
            return false;
        }
    }
    set<ll int> s(a.begin(), a.end());
    return s.size() == n;
}

vector<ll int> prefSumToArray(vector<int ll> p, ll int n)
{
    vector<ll int> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i)
    {
        res[i] = p[i] - p[i - 1];
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n;
        cin >> n;
        string ans = "YES";
        vector<ll int> v(n - 1);
        for (ll int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        ll int sum = (n * (n + 1)) / 2;
        if (v.back() != sum)
        {
            v.push_back(sum);
            vector<ll int> f = prefSumToArray(v, n);
            if (!isPermutation(f, n))
            {
                ans = "NO";
            }
        }
        else
        {
            map<ll int, ll int> m;
            m[v[0]]++;
            for (ll int i = 1; i < n - 1; i++)
            {
                ll int x = v[i] - v[i - 1];
                m[x]++;
            }
            vector<ll int> b;
            for (auto i : m)
            {
                if (i.second > 1)
                {
                    b.push_back(i.first);
                }
            }
            if (b.size() > 1)
            {
                ans = "NO";
            }
            else
            {
                if (b.size() == 1)
                {
                    int x = b[0];
                    if (m[x] > 2)
                    {
                        ans = "NO";
                    }
                }
                if (ans == "YES")
                {
                    vector<int> cnt0;
                    for (int i = 1; i <= n; ++i)
                    {
                        if (m[i] == 0)
                        {
                            cnt0.push_back(i);
                        }
                    }
                    if (cnt0.size() != 2)
                    {
                        ans = "NO";
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
