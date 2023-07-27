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
        ll int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                sum += a[i] * (-1);
            }
            else
            {
                sum += a[i];
            }
        }
        int pos = 0, neg = 0;
        int i = 0;
        while (i < n)
        {
            if (a[i] >= 0)
            {
                ll int temp = 0;
                while (i < n && a[i] >= 0)
                {
                    temp += a[i];
                    i++;
                }
                if (temp > 0)
                {
                    pos++;
                }
            }
            else
            {
                ll int temp = 0;
                while (i < n && a[i] <= 0)
                {
                    temp += a[i];
                    i++;
                }
                if (temp < 0)
                {
                    neg++;
                }
            }
        }
        cout << sum << " " << min(pos + 1, neg) << endl;
    }
    return 0;
}