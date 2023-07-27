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
        string a, b;
        cin >> a >> b;
        int rdiff = 0, diff = 0;
        int x = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                diff++;
            }
            if (a[i] != b[x])
            {
                rdiff++;
            }
            x--;
        }
        int ans1, ans2;
        if (diff % 2 == 0)
        {
            ans1 = diff + diff;
        }
        else
        {
            ans1 = diff + diff - 1;
        }

        if (rdiff % 2 == 0)
        {
            ans2 = rdiff + rdiff - 1;
        }
        else
        {
            ans2 = rdiff + rdiff;
        }
        if (rdiff == 0)
        {
            ans2 = 2;
        }
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}