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
        vector<int> a(n);
        int ans = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]])
            {
                m.erase(a[i]);
            }
            else
            {
                m[a[i]]++;
            }
            int x = m.size();
            ans = max(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}
