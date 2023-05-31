#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b == l)
            {
                v.push_back(a);
            }
        }
        if (v.size() >= k)
        {
            int ans = 0;
            sort(v.begin(), v.end());
            int i = v.size() - 1;
            while (k > 0)
            {
                ans += v[i];
                i--;
                k--;
            }
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}