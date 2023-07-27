#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            m[x].push_back(y);
        }
        ll ans = 0;
        int on = 0;
        for (auto x : m)
        {
            int i = x.first;
            sort(m[i].begin(), m[i].end());
            for (int j = m[i].size() - 1; j >= 0; j--)
            {
                if (on < i)
                {
                    ans += m[i][j];
                    on++;
                    if (on == i || j == 0)
                    {
                        on = 0;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}