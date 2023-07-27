#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)

    {
        ll int n;
        cin >> n;
        ll int ans = 0;
        while (n > 0)
        {
            ans += n;
            n = n / 2;
        }
        cout << ans << endl;
    }
    return 0;
}