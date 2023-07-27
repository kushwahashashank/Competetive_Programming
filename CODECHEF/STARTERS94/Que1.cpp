#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((b & a[i]) == b)
            {
                v.push_back(a[i]);
            }
        }
        if (v.size() > 0)
        {
            int x;
            if (v.size() > 1)
            {
                x = (v[0] & v[1]);
                for (int i = 2; i < v.size(); i++)
                {
                    x = (x & v[i]);
                }
            }
            else
            {
                x = v[0];
            }

            for (int i = 2; i < v.size(); i++)
            {
                x = (x & v[i]);
            }
            if (x == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}