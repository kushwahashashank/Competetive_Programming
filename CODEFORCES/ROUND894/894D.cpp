// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long gcd(long long n1, long long n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
long long ncr(ll n, ll r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
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
        ll low = 2, high = 3648956429, mid;
        ll ans = high;
        while (n > 1 && low <= high)
        {
            mid = (low + high) / 2;
            ll x = ncr(mid, 2);
            if (x > n)
            {
                high = mid - 1;
            }
            else
            {
                ll y = n - x;
                ans = min(mid + y, ans);
                low = mid + 1;
            }
        }
        if (n == 2)
        {
            ans = 3;
        }
        else if (n == 1)
        {
            ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}
