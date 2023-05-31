#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 1;
        int m = 1e9 + 7;
        while (k >= 1 && n > 0)
        {
            ans = (ans % m * k % m) % m;
            k--;
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}