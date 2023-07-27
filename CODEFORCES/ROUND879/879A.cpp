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
        int neg = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        int ans = 0;
        if (neg % 2 == 1)
        {
            ans++;
            neg--;
            pos++;
        }
        if (neg > pos)
        {
            int x = neg - pos;
            int y = (x + 1) / 2;
            ans += y;
            if (y % 2 == 1)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}