#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n < 4)
        {
            if (a[0] == a[n - 1])
            {
                cout << k << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            int min_count = ((n - 4) / 3) + 2;
            int curr_count = s.size();
            if ((min_count - curr_count) > 0)
            {
                cout << (min_count - curr_count) * k << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}