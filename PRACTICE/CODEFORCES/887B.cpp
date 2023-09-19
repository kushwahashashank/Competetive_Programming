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
        ll int n, k, ans = 0;
        cin >> n >> k;
        for (int i = 0; i <= n; i++)
        {
            ll int high = n, low = i;
            bool is_valid = true;
            for (int j = 0; j < k - 2; j++)
            {
                ll int temp = low;
                low = high - low;
                high = temp;
                is_valid &= (low <= high);
                is_valid &= min(low, high) >= 0;
                if (!is_valid)
                    break;
            }
            if (is_valid)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
