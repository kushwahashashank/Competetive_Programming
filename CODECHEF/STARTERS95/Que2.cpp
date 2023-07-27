#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, m, h;
        cin >> n >> m >> h;
        ll int car[n], power[m];
        for (int i = 0; i < n; i++)
        {
            cin >> car[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> power[i];
            power[i] *= h;
        }
        sort(car, car + n);
        sort(power, power + m);
        int i = n - 1, j = m - 1;
        ll int ans = 0;
        while (i >= 0 && j >= 0)
        {
            ans += min(car[i], power[j]);
            i--;
            j--;
        }
        cout << ans << endl;
    }
    return 0;
}