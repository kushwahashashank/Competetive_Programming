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
        vector<ll int> a(n);
        for (ll int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> v;
        ll int j = 0;
        ll int sum = a[0] + a[1] + a[2];
        v.push_back((3 - (sum % 3)) % 3);
        cout << v[0] << " ";
        for (ll int i = 3; i < n; i++)
        {
            sum -= a[j];
            j++;
            sum += a[i];
            int x = sum % 3;
            v.push_back((3 - x) % 3);
            cout << v[i - 2] << " ";
        }
        cout << endl;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i + 1 < v.size() && i + 2 < v.size())
            {
                int mn = 3;
                mn = min(mn, v[i]);
                mn = min(mn, v[i + 1]);
                mn = min(mn, v[i + 2]);
                ans += mn;
                v[i] -= mn;
                v[i + 1] -= mn;
                v[i + 2] -= mn;
            }
            else if (i + 1 < v.size())
            {
                int mn = 3;
                mn = min(mn, v[i]);
                mn = min(mn, v[i + 1]);
                ans += mn;
                v[i] -= mn;
                v[i + 1] -= mn;
            }
            else
            {
                ans += v[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
