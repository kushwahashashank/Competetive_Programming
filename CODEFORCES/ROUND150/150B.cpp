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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        v.push_back(1);
        int last = a[0];
        bool b = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= last && b)
            {
                v.push_back(1);
                last = a[i];
            }
            else
            {
                if (a[i] <= a[0] && b)
                {
                    v.push_back(1);
                    last = a[i];
                    b = false;
                }
                else if (a[i] <= a[0] && a[i] >= last)
                {
                    v.push_back(1);
                    last = a[i];
                }
                else
                {
                    v.push_back(0);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}