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
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        ll temp = (n * (n + 1)) / 2;
        v.push_back(temp - sum);
        k = k % (n + 1);
        for (int i = 0; i < n; i++)
        {
            int x = (i - k + n + 1) % (n + 1);
            cout << v[x] << " ";
        }
        cout << endl;
    }
    return 0;
}
