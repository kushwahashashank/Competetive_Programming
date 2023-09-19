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
        string a, b;
        cin >> a >> b;
        if (a[0] != b[0] && a[a.size() - 1] != b[b.size() - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        if (a[0] == a[a.size() - 1] && b[0] == b[a.size() - 1] && a[0] == b[0])
        {
            cout << "YES" << endl;
            continue;
        }
        int f = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == a[0] && b[i] == a[0] && a[i + 1] == b[i + 1] && a[i + 1] == a[a.size() - 1])
                f = 1;
        };
        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
