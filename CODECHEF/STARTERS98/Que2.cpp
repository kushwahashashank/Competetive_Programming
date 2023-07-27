#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, m;
        cin >> n >> m;
        vector<int> a(n);
        ll int ans = 0;
        ll int temp = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            temp += a[i];
        }
        ans = temp / n;
        temp %= n;
        if (temp > 0)
        {
            ans++;
        }
        if (ans == m)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}