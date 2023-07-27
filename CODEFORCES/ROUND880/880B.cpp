#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, k, g;
        cin >> n >> k >> g;
        ll int coins = k * g;
        ll int x = (g + 1) / 2;
        ll int ans;
        ans = (x - 1) * (n - 1);
        ll int remain = coins - ans;
        ll int r = remain % g;
        if (r >= (x))
        {
            ans -= (g - r);
        }
        else
        {
            ans += r;
        }
        if (ans > k * g)
        {
            ans = k * g;
        }
        cout << ans << endl;
    }

    return 0;
}