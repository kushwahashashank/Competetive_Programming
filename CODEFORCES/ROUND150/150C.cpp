#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int help(string &s, int j, int c, int ch, vector<int> &v, vector<vector<vector<ll int>>> &dp)
{
    if (j < 0)
    {
        return 0;
    }
    if (dp[j][ch][c] != -1)
        return dp[j][ch][c];
    ll int ans = INT_MIN;
    int temp = s[j] - 65;
    if (c == 0)
    {
        for (int i = 0; i < 5; i++)
        {
            int temp1 = v[i];
            if (i < ch)
            {
                temp1 = -v[i];
            }
            int x = max(ch, i);
            if (i != temp)
            {
                ans = max(ans, temp1 + help(s, j - 1, 1, x, v, dp));
            }
            else
            {
                ans = max(ans, temp1 + help(s, j - 1, 0, x, v, dp));
            }
        }
    }
    else
    {
        int temp1 = v[temp];
        if (temp < ch)
        {
            temp1 = -v[temp];
        }
        int x = max(ch, temp);
        ans = max(ans, temp1 + help(s, j - 1, 1, x, v, dp));
    }
    return dp[j][ch][c] = ans;
}
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        string s;
        cin >> s;
        int n = s.length();
        vector<ll int> a(n);
        ll int sum = 0;
        vector<int> v;
        int x = 1;
        vector<vector<vector<ll int>>> dp(n + 1, vector<vector<ll int>>(6, vector<ll int>(3, -1)));
        for (int i = 0; i < 5; i++)
        {
            v.push_back(x);
            x *= 10;
        }
        cout << help(s, n - 1, 0, 0, v, dp) << endl;
    }
    return 0;
}