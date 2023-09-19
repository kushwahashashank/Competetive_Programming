// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int c[200000];
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
        for (int i = 0; i < n; i++)
            cin >> c[i];

        int allneg = 1;
        for (int i = 0; i < n; i++)
            allneg &= (c[i] < 0);
        if (allneg)
            cout << *max_element(c, c + n) << endl;
        else
        {
            ll ans1 = 0, ans2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (i & 1)
                    ans1 += max(c[i], 0);
                else
                    ans2 += max(c[i], 0);
            }
            cout << max(ans1, ans2) << endl;
        }
    }
    return 0;
}

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