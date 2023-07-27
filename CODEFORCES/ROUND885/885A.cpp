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
        ll int n, m, k;
        cin >> n >> m >> k;
        ll int x, y;
        cin >> x >> y;
        vector<pair<int, int>> v;
        string ans = "YES";
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        for (int i = 0; i < k; i++)
        {
            int xd = abs(v[i].first - x);
            int yd = abs(v[i].second - y);
            int dis;
            if (xd == 0 && yd == 0)
            {
                ans = "NO";
                break;
            }
            else if (xd == 0 || yd == 0)
            {
                dis = max(xd, yd) - 1;
            }
            else
            {
                if (xd == 1 || yd == 1)
                {
                    dis = xd * yd;
                }
                else
                {
                    if (xd % 2 == 0 && yd % 2 == 0)
                    {
                        dis = xd * yd - 1;
                    }
                    else
                    {
                        dis = xd * yd - 2;
                    }
                }
            }
            if (dis % 2 == 1)
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
