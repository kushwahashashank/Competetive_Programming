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
        vector<int> v;
        int f = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
            {
                if (v.size() && v.back() == -1)
                    v.push_back(-1);
                else
                    v.push_back(0);
            }
            else if (s[i] == '-')
            {
                int temp = v.back();
                v.pop_back();
                if (temp == 1 && v.size())
                    v.back() = 1;
            }
            else
            {
                if (s[i] == '1')
                {
                    if (v.size() < 2)
                        continue;
                    if (v.back() == -1)
                        f = 0;
                    else
                        v.back() = 1;
                }
                else
                {
                    if (v.size() < 2)
                    {
                        f = 0;
                        continue;
                    }
                    if (v.back() == 1)
                        f = 0;
                    else
                        v.back() = -1;
                }
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
