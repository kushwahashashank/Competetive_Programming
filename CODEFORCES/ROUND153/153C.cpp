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
        vector<ll> v(n), a(n, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<ll> win, lose;
        lose.insert(v[0]);
        set<ll> s = lose;
        for (ll i = 1; i < n; i++)
        {
            if (!win.size() || *win.begin() > v[i])
            {
                if (*lose.begin() < v[i])
                {
                    win.insert(v[i]);
                }
            }
            if (v[i] < *s.begin())
            {
                lose.insert(v[i]);
            }
            s.insert(v[i]);
        }
        cout << win.size() << endl;
    }
    return 0;
}
