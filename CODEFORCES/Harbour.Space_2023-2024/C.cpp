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
        ll n;
        cin >> n;
        vector<ll> ans;
        ans.push_back(n);
        while (__builtin_popcount(n) > 1)
        {
            n -= n & -n;
            ans.push_back(n);
        }
        while (n > 1)
        {
            n /= 2;
            ans.push_back(n);
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
