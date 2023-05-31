#include <bits/stdc++.h>
using namespace std;

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        long long n, k;
        cin >> n >> k;
        set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            s.insert(a);
        }
        if (s.size() > n / 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << k * ((n / 2 - s.size()) + 1) << endl;
        }
    }
    return 0;
}