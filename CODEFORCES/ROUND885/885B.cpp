// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, k;
        cin >> n >> k;
        vector<int> v;
        for (ll int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]].push_back(i + 1);
        }
        int ans = INT_MAX;
        for (auto i : m)
        {
            i.second.push_back(n + 1);
            int m1 = 0, m2 = 0;
            m1 = i.second[0];
            for (int j = 1; j < i.second.size(); j++)
            {
                int dif = (i.second[j] - i.second[j - 1]);
                if (dif >= m1)
                {
                    m2 = m1;
                    m1 = dif;
                }
                else
                {
                    m2 = max(m2, dif);
                }
            }
            ans = min(ans, max(m2 - 1, (m1 - 1) / 2));
        }
        cout << ans << endl;
    }
    return 0;
}
