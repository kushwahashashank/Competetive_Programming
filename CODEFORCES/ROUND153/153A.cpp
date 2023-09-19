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
        string s;
        cin >> s;
        bool a = false;
        bool b = false;
        string ans = "";
        for (int i = 0; i < s.length() - 1; i++)
        {
            if ((s[i] == ')' && s[i + 1] == ')') || (s[i] == '(' && s[i + 1] == '('))
            {
                a = true;
            }
            else if (s[i] == ')' && s[i + 1] == '(')
            {
                b = true;
            }
        }
        if (b)
        {
            for (int i = 0; i < 2 * s.length(); i++)
            {
                if (i < s.length())
                {
                    ans.push_back('(');
                }
                else
                {
                    ans.push_back(')');
                }
            }
        }
        else if (a)
        {
            for (int i = 0; i < s.length(); i++)
            {

                ans += "()";
            }
        }
        if (a || b)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
