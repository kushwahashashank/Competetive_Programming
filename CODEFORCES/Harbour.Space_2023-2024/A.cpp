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
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> ans;
        ll x = 1;
        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(b);
            b -= x;
            x++;
        }
        ans.push_back(a);
        if (ans[n - 2] - ans[n - 1] > ans[n - 3] - ans[n - 2])
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
