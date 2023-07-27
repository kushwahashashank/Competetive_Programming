#include <bits/stdc++.h>
using namespace std;
#define ll long long
// void help(string &s, string &l, string &r, int x, int j, string &ans, char c)
// {
//     if (ans == "YES")
//         return;

//         for (char i = min(l[j], r[j]); i <= max(l[j], r[j]); i++)
//     {
//         if (c == s[x])
//         {
//             help(s, l, r, x + 1, j + 1, ans, i);
//         }
//         else
//         {
//             help(s, l, r, x, j + 1, ans, i);
//         }
//     }
// }
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        string s, l, r;
        ll int m;
        cin >> s >> m >> l >> r;
        string ans = "NO";
        // for (char i = min(l[0], r[0]); i <= max(l[0], r[0]); i++)
        // {
        //     help(s, l, r, 0, 1, ans, i);
        // }
        vector<set<int>> v(s.length());
        set<int> st;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            st.insert(s[i] - 48);
            v[i] = st;
        }
        }
    return 0;
}