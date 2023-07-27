#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, x, k;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k > 1 && n % 2 == 0)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else if (n % 2 == 1 && n > 1 && k > 2)
            {
                cout << "YES" << endl;
                n -= 3;
                cout << (n / 2) + 1 << endl;
                cout << 3 << " ";
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}