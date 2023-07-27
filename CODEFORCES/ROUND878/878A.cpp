#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        char temp = s[0];
        ans.push_back(s[0]);
        for (int i = 1; i < n; i++)
        {
            while (i < n && s[i] != temp)
            {
                i++;
            }
            i++;
            if (i < n)
            {
                ans.push_back(s[i]);
                temp = s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}