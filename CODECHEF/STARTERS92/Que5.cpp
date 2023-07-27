#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n < k)
        {
            cout << 0 << endl;
        }
        else
        {
            ll i = 0;
            ll j = (long long)1e18;
            sort(v.begin(), v.end(), greater<long long>());
            ll ans = 0;
            while (i <= j)
            {
                ll mid = (i + j) / 2;
                ll no_of_elements = 0, rest = 0;
                for (int i = 0; i < n; i++)
                {
                    if (rest == 0)
                    {
                        if (v[i] >= mid)
                        {
                            no_of_elements++;
                        }
                        else
                            rest = +v[i];
                    }
                    else
                    {
                        rest += v[i];
                        if (rest >= mid)
                        {
                            rest -= mid;
                            no_of_elements++;
                        }
                    }
                }
                if (no_of_elements >= k)
                {
                    ans = max(ans, mid);
                    i = mid + 1;
                }
                else
                {
                    j = mid - 1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}