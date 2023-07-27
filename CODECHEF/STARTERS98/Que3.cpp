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
        string ans = "NO";
        if (n % 3 == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 3 == 2)
        {
            map<char, vector<int>> m;
            for (int i = 0; i < n; i++)
            {
                m[s[i]].push_back(i);
            }
            for (auto v : m)
            {
            }
            cout << ans << endl;
        }
        else
        {

            cout << ans << endl;
        }
    }
    return 0;
}