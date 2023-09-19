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
        int n;
        cin >> n;
        int ans = 0, sum = 0, ma = 0;
        set<int> s;
        vector<int> poss;
        vector<int> done(n * (n + 1));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (done[i * j])
                    continue;
                done[i * j] = 1;
                poss.push_back(i * j);
            }
        }
        sort(poss.rbegin(), poss.rend());
        int f;
        for (auto m : poss)
        {
            if (m * n < ans)
                break;
            for (int i = 1; i <= n; i++)
            {
                s.insert(i);
            }
            sum = ma = 0;
            f = 1;
            for (int i = n; i >= 1; i--)
            {
                auto x = s.lower_bound((m / i) + 1);
                if (x == s.begin())
                {
                    f = 0;
                    break;
                }
                int temp = *(--x);
                s.erase(temp);
                ma = max(ma, temp * i);
                sum += temp * i;
            }
            if (!f)
                continue;
            ans = max(ans, sum - ma);
        }
        cout << ans << endl;
    }
    return 0;
}