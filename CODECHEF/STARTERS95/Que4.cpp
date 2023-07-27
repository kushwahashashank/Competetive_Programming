#include <bits/stdc++.h>
using namespace std;
#define ll long long

void help(vector<ll int> &v, int x, ll int prev, ll int sum, int k, ll int &ans)
{
    int n = v.size();
    if (x >= n - 1)
    {
        int m = max(prev, v[n - 1]);
        ans = max(ans, k - sum);
        return;
    }
    for (int i = x; i < n - 1; i++)
    {
        int m = max(prev, v[i]);
        sum += m;
        help(v, i + 1, v[i + 1], sum, k + 1, ans);
        sum -= m;
    }
    return;
}
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        vector<ll int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll int ans = INT_MIN;
        help(v, 0, v[0], 0, 1, ans);
        cout << ans << endl;
    }
    return 0;
}