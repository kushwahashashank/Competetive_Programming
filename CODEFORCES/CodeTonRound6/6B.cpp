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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        vector<int> a1(32, 0), b1(32, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int x = a[i];
            int j = 0;
            while (x > 0)
            {
                if (x & 1)
                {
                    a1[j]++;
                }
                x = x >> 1;
                j++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            int x = b[i];
            int j = 0;
            while (x > 0)
            {
                if (x & 1)
                {
                    b1[j]++;
                }
                j++;
                x = x >> 1;
            }
        }

        int ma = 0, mi = 0;
        for (int i = 0; i < 32; i++)
        {
            cout << a1[i] << " " << b1[i] << endl;
            if (a1[i] % 2 == 1)
            {
                ma += pow(2, i);
            }
            else
            {
                if (b1[i] > 0)
                {
                    ma += pow(2, i);
                }
            }
            if (a1[i] % 2 == 0 && a1[i] > 0)
            {
                if (b1[i] == 0)
                {
                    mi += pow(2, i);
                }
            }
        }
        cout << mi << " " << ma << endl;
    }
    return 0;
}
