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
        vector<vector<ll int>> v;
        ll int ans = INT_MAX, res = 0, index;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<ll int> a;
            int l = INT_MAX, r = INT_MAX;
            for (int i = 0; i < m; i++)
            {
                int x;
                cin >> x;
                if (r > x)
                {
                    l = min(l, r);
                    r = x;
                }
                else
                {
                    if (l >= x)
                    {
                        l = r;
                        r = x;
                    }
                }
            }
            a.push_back(l);
            a.push_back(r);
            sort(a.begin(), a.end());
            res += min(a[0], a[1]);
            if (ans > a[0])
            {
                ans = a[0];
                index = i;
            }
            if (ans > a[1])
            {
                ans = a[1];
                index = i;
            }
            v.push_back({a[1], a[0]});
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            ans += v[i][0];
        }
        cout << max(ans, res) << endl;
    }
    return 0;
}
