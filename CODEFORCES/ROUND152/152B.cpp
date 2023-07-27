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
        ll int n, k;
        cin >> n >> k;
        vector<ll int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            v[i] = v[i] % k;
        vector<pair<ll int, ll int>> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back({v[i], i + 1});
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i].first == 0)
            {
                cout << a[i].second << " ";
            }
            else
            {
                break;
            }
        }
        int i = n - 1;
        while (i >= 0 && a[i].first != 0)
        {
            int j = i;
            while (i > 0 && a[i].first != 0 && a[i].first == a[i - 1].first)
            {
                i--;
            }
            int x = i;
            while (x <= j)
            {
                cout << a[x].second << " ";
                x++;
            }
            i--;
        }
        cout << endl;
    }

    return 0;
}
