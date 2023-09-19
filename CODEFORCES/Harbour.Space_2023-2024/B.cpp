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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
        else
        {
            vector<vector<int>> v(26, vector<int>(2));
            for (int i = 0; i < n; i++)
            {
                v[s[i] - 'a'][i % 2]++;
            }
            string ans = "";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (v[j][i % 2] > 0)
                    {
                        v[j][i % 2]--;
                        ans += (j + 'a');
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
