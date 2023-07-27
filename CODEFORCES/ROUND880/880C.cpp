#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int a, b, c, k;
        cin >> a >> b >> c >> k;
        ll int AL = pow(10, (a - 1)), AM = pow(10, a) - 1, BL = pow(10, (b - 1)), BM = pow(10, b) - 1;
        ll int CL = pow(10, (c - 1)), CM = pow(10, c) - 1;
        ll int A = -1, B;
        for (ll int i = AL; i <= AM; i++)
        {
            ll int Bmin = max(BL, CL - i);
            ll int Bmax = min(BM, CM - i);
            if (Bmax < Bmin)
            {
                continue;
            }
            if (Bmax - Bmin + 1 >= k)
            {
                A = i, B = Bmin + k - 1;
                break;
            }
            k -= (Bmax - Bmin + 1);
        }
        if (A == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << A << " + " << B << " = " << A + B << endl;
        }
    }
    return 0;
}