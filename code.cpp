#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    vector<pair<ll int, ll int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    ll int m, r;
    cin >> m >> r;
    ll int container = v[0].second;
    ll int t = v[0].first;
    ll int ans = 0;
    if (v[0].second > m)
    {
        ans += (v[0].second - m);
        container=m;
    }
    for (int i = 1; i < n; i++)
    {
        // ll int x = v[i].first - t;
        // ll int done = x * r;
        // t = v[i].first;
        // container -= min(container, done);
        // container += v[i].second;
        // if (container > m)
        // {
        //     ans += (container - m);
        //     container = m;
        // }
        ll int done = r * (v[i].first - t);
        t = v[i].first;
        container -= min(done, container);
        container += v[i].second;
        if (container > m)
        {
            ans += container - m;
            container = m;
        }
    }
    cout << ans << endl;
    return 0;
}