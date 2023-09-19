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
        int n, k, x;
        cin >> n >> k >> x;
        int ans = -1;
        if (n < k || x < k - 1)
        {
            cout << ans << endl;
        }
        else
        {
            n--;
            int l = k - 1;
            int sum;
            if (x < k)
            {
                l = x;
            }
            if (x == k)
            {
                x--;
                l--;
            }
            sum = (l * (l + 1)) / 2;
            n -= l;
            for (int i = 0; i < n; i++)
            {
                sum += x;
            }

            cout << sum << endl;
        }
    }
    return 0;
}
