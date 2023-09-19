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
        ll int n;
        cin >> n;
        vector<int> v;
        vector<int> a(n + 1, 1);
        for (int i = 1; i <= n / 2; i++)
        {
            int x = i;
            while (x <= n && a[x] == 1)
            {
                a[x] = 0;
                v.push_back(x);
                x *= 2;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                v.push_back(i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
