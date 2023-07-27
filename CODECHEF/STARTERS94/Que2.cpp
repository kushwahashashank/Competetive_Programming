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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int addy = 0, om = 0;
        int addy_temp = 0, om_temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                addy_temp++;
                addy = max(addy_temp, addy);
            }
            else
            {
                addy = max(addy_temp, addy);
                addy_temp = 0;
            }
            if (b[i] > 0)
            {
                om_temp++;
                om = max(om_temp, om);
            }
            else
            {
                om = max(om_temp, om);
                om_temp = 0;
            }
        }
        if (addy < om)
        {
            cout << "Addy" << endl;
        }
        else if (addy == om)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Om" << endl;
        }
    }

    return 0;
}