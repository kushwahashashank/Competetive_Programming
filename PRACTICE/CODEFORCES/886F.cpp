// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x <= n)
                ++cnt[x];
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = i; j <= n; j += i)
                mx[j] += cnt[i];
        }
        cout << *max_element(all(mx)) << "\n";
    }
    return 0;
}