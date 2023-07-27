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
        int mi = INT_MAX;
        int ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ma = max(ma, a);
            mi = min(mi, a);
        }
        if (mi >= 0)
        {
            cout << ma << endl;
        }
        else
        {
            cout << mi << endl;
        }
    }
    return 0;
}