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
        int n, m;
        cin >> n >> m;
        map<int, vector<int>> mp, ma;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        ma = mp;
        int x = 1, y = 0;
        for (auto i : mp)
        {
            bool b = true;
            for (int j = 0; j < i.second.size(); j++)
            {
                if (mp[i.second[j]].size() == 1)
                {
                    b = false;
                    y = i.second.size() - 1;
                    break;
                }
            }
            if (b && i.second.size() > 1)
            {
                x = i.second.size();
            }
        }
        for (auto i : mp)
        {
            if (i.second.size() == 1)
            {
                ma.erase(i.first);
            }
        }
        if (ma.size() == 1)
        {
            auto it = ma.begin();
            x = it->second.size();
            y = 0;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
