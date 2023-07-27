#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n;
        cin >> n;
        ll int a[n];
        ll int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        ll int m = 1e9 + 7;
        ll int ans = 1;
        for (int i = 0; i < even; i++)
        {
            ans = (ans * 2) % m;
        }
        if (odd == 0)
        {
            cout << ans - 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}