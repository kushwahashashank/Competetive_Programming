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
        vector<int> a(n, 0);
        int one, in, two;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one = i;
            }
            if (a[i] == n)
            {
                in = i;
            }
            if (a[i] == 2)
            {
                two = i;
            }
        }
        if ((two > one && in < one) || (one > two && in > one))
        {
            cout << in + 1 << " " << one + 1 << endl;
        }
        else if ((two > one && in > two) || (two < one && in < two))
        {
            cout << two + 1 << " " << in + 1 << endl;
        }
        else if (one > in > two || one < in < two)
        {
            cout << 1 << " " << 1 << endl;
        }
    }
    return 0;
}