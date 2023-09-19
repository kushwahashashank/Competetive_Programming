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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> a = v;
        sort(a.begin(), a.end());
        int operations = 0;
        vector<pair<int, int>> ans;
        if (a[0] < 0)
        {
            if (a[n - 1] <= 0)
            {
                for (int i = n - 2; i >= 0; i--)
                {
                    if (v[i] > v[i + 1])
                    {
                        v[i] += v[i + 1];
                        operations++;
                        ans.push_back({i + 1, i + 2});
                    }
                }
            }
            else
            {
                int j;
                int x = -20;
                for (int i = 0; i < n; i++)
                {
                    if (v[i] > x)
                    {
                        j = i;
                        x = v[i];
                    }
                }
                while (v[j] < 20)
                {
                    operations++;
                    v[j] = v[j] * 2;
                    ans.push_back({j + 1, j + 1});
                }
                for (int i = 0; i < n; i++)
                {
                    if (v[i] < 0)
                    {
                        v[i] += v[j];
                        operations++;
                        ans.push_back({i + 1, j + 1});
                    }
                }
                for (int i = 1; i < n; i++)
                {
                    if (v[i] < v[i - 1])
                    {
                        operations++;
                        v[i] += v[i - 1];
                        ans.push_back({i + 1, i});
                    }
                }
            }
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (v[i] < v[i - 1])
                {
                    operations++;
                    v[i] += v[i - 1];
                    ans.push_back({i + 1, i});
                }
            }
        }
        cout << operations << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    return 0;
}
