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
        ll int n;
        cin >> n;
        vector<pair<ll int, ll int>> a, b;
        for (ll int i = 0; i < n; i++)
        {
            ll int x, y;
            cin >> x >> y;
            a.push_back({x, i});
            b.push_back({y, i});
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = n - 1, j = -1;
        int ans = INT_MAX;
        vector<int> as(n, 0), bs(n, 0);
        while (i > 0 && j > 0)
        {
            if (a[i].second == b[j].second || as[b[j].second] == 1 || bs[a[i].second] == 1)
            {
                int x = abs(b[j].first - a[i - 1].first);
                ans = min(ans, x);
                x = abs(b[j].first - b[j - 1].first);
                ans = min(ans, x);
                x = abs(a[i].first - b[j - 1].first);
                ans = min(ans, x);
                x = abs(a[i].first - a[i - 1].first);
                ans = min(ans, x);
                break;
            }
            else
            {
                int x = abs(b[j].first - a[i - 1].first);
                ans = min(ans, x);
                x = abs(b[j].first - b[j - 1].first);
                ans = min(ans, x);
                x = abs(a[i].first - b[j - 1].first);
                ans = min(ans, x);
                x = abs(a[i].first - a[i - 1].first);
                ans = min(ans, x);
                x = abs(a[i].first - b[j].first);
                ans = min(ans, x);
                as[a[i].second]++;
                bs[b[j].second]++;
            }
            i--;
            j--;
        }
        cout << ans << endl;
    }
    return 0;
}
