#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, k;
        cin >> n >> k;
        vector<ll int> v(n, 0);
        for (int x = 0; x < n; x++)
        {
            cin >> v[x];
        }
        sort(v.begin(), v.end());
        ll int pre_sum = v[0];
        ll int i = 1;
        for (i = 1; i < n; i++)
        {
            if (v[i] * 1ll * i - pre_sum > k)
            {
                break;
            }
            pre_sum += v[i];
        }
        for (int x = 0; x < i; x++)
        {
            k -= v[min(i, n - 1)] - v[x];
            v[x] = v[min(i, n - 1)];
        }
        for (int x = 0; x < i; x++)
        {
            ll int l = k / (i - x);
            k -= l;
            v[x] += l;
        }
        ll int sum = 0;
        for (int x = 0; x < n; x++)
        {
            sum += v[x];
        }
        ll int ans = 0;
        ll m = 1e9 + 7;
        for (int x = 0; x < n; x++)
        {
            sum -= v[x];
            ans += (sum % m * v[x] % m) % m;
            ans %= m;
        }
        cout << ans << endl;
    }
    return 0;
}