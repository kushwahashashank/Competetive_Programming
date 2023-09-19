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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll j = 0, x = 1;
        while (k--)
        {
            while (j < n && v[j] <= x + j)
                j++;
            x += j;
        }
        cout << x << endl;
    }
    return 0;
}
