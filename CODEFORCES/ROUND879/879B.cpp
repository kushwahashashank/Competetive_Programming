#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        string l, r;
        cin >> l >> r;
        long long int ans = 0;

        int a = l.length();
        int b = r.length();
        if (a != b)
        {
            if (a < b)
            {
                while (l.length() != r.length())
                {
                    l = '0' + l;
                }
            }
            else
            {
                while (l.length() != r.length())
                {
                    r = '0' + r;
                }
            }
        }
        a = l.length();
        b = r.length();
        int temp = -1;
        for (int i = 0; i < a; i++)
        {
            if (l[i] != r[i])
            {
                temp = i;
                break;
            }
        }
        if (temp == -1)
        {
            ans = 0;
        }
        else
        {

            ans += (a - temp - 1) * 9;

            ans += abs(l[temp] - r[temp]);
        }

        cout << ans << endl;
    }
    return 0;
}