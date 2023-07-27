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
        string s;
        cin >> s;
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        vector<int> a(n, 0);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                c++;
            }
            a[i] = c;
            cout << a[i] << " ";
        }
        cout << endl;
        map<int, int> ma;
        for (int i = 0; i < m; i++)
        {
            int x = a[v[i].second] - a[v[i].first];
            int nz = a[v[i].second] - a[x];
            if (nz != x)
                ma[x]++;
        }
        cout << ma.size() << endl;
    }
    return 0;
}
