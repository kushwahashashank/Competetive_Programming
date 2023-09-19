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
        vector<ll> a(n), b(n), ans;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        for (ll i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        ll ma = INT_MIN;
        for (ll i = 0; i < n; i++)
            ma = max(ma, a[i] - b[i]);
        ll count = 0;
        for (ll i = 0; i < n; i++)
            count += (ma == a[i] - b[i]);
        cout << count << endl;
        for (ll i = 0; i < n; i++)
            if (ma == a[i] - b[i])
                cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}
