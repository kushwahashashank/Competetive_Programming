#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxn = 2 * 1e5 + 5, maxroot = 640;
int m[maxroot][maxn];
ll a[maxn], b[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll n;
        cin >> n;
        ll val = sqrt(2 * n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] <= val)
                m[a[i]][b[i]]++;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= val)
            {
                if (a[i] * a[i] - b[i] >= 1 && a[i] * a[i] - b[i] <= n)
                    ans += m[a[i]][a[i] * a[i] - b[i]];
            }
        }
        for (int i = 2; i <= val; i += 2)
            ans -= m[i][i * i / 2];
        ans /= 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= val && j < a[i] && j * a[i] <= 2 * n; j++)
            {
                if (j * a[i] - b[i] >= 1 && j * a[i] - b[i] <= n)
                    ans += m[j][j * a[i] - b[i]];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= val)
                m[a[i]][b[i]] = 0;
        }

        cout << ans << endl;
    }
    return 0;
}