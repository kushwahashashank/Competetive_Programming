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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = n - 1;
        vector<int> ans;
        for (int i = n - 1; i > 0; i--)
        {
            if (v[i - 1] > v[i])
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
            else
            {
                ans.push_back(v[i]);
            }
        }

        ans.push_back(v[0]);
        cout << ans.size() << endl;
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
