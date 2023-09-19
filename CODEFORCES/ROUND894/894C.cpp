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
        int n;
        cin >> n;
        vector<int> v(n);
        int ma = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            ma = max(ma, v[i]);
        }
        if (ma > n)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> a(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            a[0]++;
            a[v[i]]--;
        }
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
            a[i] = sum;
        }
        bool check = true;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != v[i])
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}