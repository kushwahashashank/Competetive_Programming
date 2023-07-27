#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long int nCrModpDP(long long int n, long long int r, long long int p)
{
    long long int C[r + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}
long long int nCrModpLucas(long long int n, long long int r, long long int p)
{
    if (r == 0)
        return 1;
    long long int ni = n % p, ri = r % p;
    return (nCrModpLucas(n / p, r / p, p) * nCrModpDP(ni, ri, p)) % p;
}
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        ll int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 1;
        sort(a, a + n);
        ll int x = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] <= x)
            {
                x = x ^ a[i];
            }
            else
            {
                ans++;
                x = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}