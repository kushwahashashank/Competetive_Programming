#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        int a[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int ans = 0;
        vector<int> v(1500, 0);
        for (int i = 0; i < n; i++)
        {
            v[a[i]]++;
            v[d[i]]++;
        }
        for (int i = 0; i < 1500; i++)
        {
            ans = max(ans, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}