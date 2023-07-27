#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int x = 1;
        if (n == 4)
        {
            int x = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    a[i][j] = x;
                    x++;
                }
            }
        }
        else
        {
            int x = 1;
            for (int i = 0; i < n; i += 2)
            {
                for (int j = 0; j < m; j++)
                {
                    a[i][j] = x;
                    x++;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                for (int j = 0; j < m; j++)
                {
                    a[i][j] = x;
                    x++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}