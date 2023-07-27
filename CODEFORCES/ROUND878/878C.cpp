#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        ll int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                x++;
            }
            else
            {
                if (x >= k)
                {

                    ll int l = x - k + 1;
                    ans += (l * (l + 1)) / 2;
                }
                x = 0;
            }
        }
        if (x >= k)
        {

            ll int l = x - k + 1;
            ans += (l * (l + 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}