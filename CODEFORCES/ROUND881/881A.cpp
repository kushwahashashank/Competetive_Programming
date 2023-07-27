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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0;
        int j = n - 1;
        ll int ans = 0;
        while (i < j)
        {
            ans += a[j] - a[i];
            i++;
            j--;
                }
        cout << ans << endl;
    }
    return 0;
}