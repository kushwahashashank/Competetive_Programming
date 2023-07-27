#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n;
        cin >> n;
        vector<int64_t> t(n);
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if (i > 0)
            {
                t[i] += t[i - 1];
            }
        }
        ll int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (t[i] < t[i - 1])
            {
                ans = max(t[i - 1], ans);
            }
        }
        if (ans == 0 && t[n - 1] > 0)
        {
            ans = t[n - 1];
        }
        cout << ans << endl;
    }
    return 0;
}