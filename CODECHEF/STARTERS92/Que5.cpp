#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        long long n, k;
        cin >> n >> k;
        priority_queue<long long> q;
        for (int i = 0; i < n; i++)
        {
            long long aj;
            cin >> aj;
            q.push(aj);
        }
        if (n < k)
        {
            cout << 0 << endl;
        }
        else
        {
            long long ans = 0;
            long long a[k];
            while (true)
            {
                long long m = INT_MAX;
                for (int i = 0; i < k; i++)
                {
                    a[i] = q.top();
                    q.pop();
                    m = min(m, a[i]);
                }
                if (m == 0)
                {
                    break;
                }
                else
                {
                    ans += m;
                    for (int i = 0; i < k; i++)
                    {
                        q.push(a[i] - m);
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}