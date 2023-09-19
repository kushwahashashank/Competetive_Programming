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
        ll int ans = 0;
        ll int x = 1;
        while (n % x == 0)
        {
            ans++;
            x++;
        }
        cout << ans << endl;
    }
    return 0;
}
