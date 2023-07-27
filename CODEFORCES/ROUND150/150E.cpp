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
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            q.push(n - a);
        }
        int m;
        cin >> m;
        long long int ans = 0;
        while (m > 0 && q.size() > 0)
        {
            int x = q.top();
            q.pop();
            if (x >= 2)
            {
                if (x <= m)
                {
                    ans += x - 1;
                    m -= x;
                }
                else
                {
                    if (m > 1)
                    {
                        ans += m - 1;
                        m = 0;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}