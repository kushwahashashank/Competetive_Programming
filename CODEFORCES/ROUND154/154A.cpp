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
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '3')
            {
                cout << 37 << endl;
                break;
            }
            if (s[i] == '7')
            {
                cout << 73 << endl;
                break;
            }
        }
    }
    return 0;
}
