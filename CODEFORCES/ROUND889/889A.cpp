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
        ll int a[n];
        ll int count = 0;
        for (ll int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i + 1 == a[i])
            {
                count++;
            }
        }
        cout << count / 2 + count % 2 << endl;
    }
    return 0;
}
