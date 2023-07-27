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
        vector<int> a(200, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        int temp = -1;
        string ans = "YES";
        int prev = INT_MAX;
        for (int i = 0; i < 200; i++)
        {
            if (i == (temp + 1) && a[i] <= prev)
            {
                prev = a[i];
                temp = i;
            }
            else
            {
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
    return 0;
}