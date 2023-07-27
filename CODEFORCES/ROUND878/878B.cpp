#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n, k;
        cin >> n >> k;
        k = min(k, (ll int)30);
        ll int ans = pow(2, k);
        n++;
        cout << min(n, ans) << endl;
    }
    return 0;
}