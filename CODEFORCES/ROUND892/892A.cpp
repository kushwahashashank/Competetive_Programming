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
        ll int n, even = 0, odd = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int a = 1, b;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v[i + 1])
            {
                b = v[i + 1];
                break;
            }
            else
            {
                a++;
            }
        }
        if (a == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << " " << n - a << endl;
            for (int i = 0; i < a; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            for (int i = a; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
