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
        vector<vector<char>> v;
        for (int i = 0; i < n; i++)
        {
            vector<char> a;
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                a.push_back(x);
            }
            v.push_back(a);
        }
        string s = "vika";
        string ans = "NO";
        int k = 0;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == s[k])
                {
                    k++;
                    break;
                }
            }
        }
        if (k == 4)
        {
            ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}
