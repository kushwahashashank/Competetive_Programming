// हर हर महादेव
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int pos = 0, neg = 0, ma = INT_MIN, mi = INT_MAX, zero = 0, posmi, posma;
        for (int i = 0; i < n; i++)
        {
            v[i] > 0 ? pos++ : neg++;
            if (v[i] == 0)
            {
                zero++;
            }
            if (v[i] > ma)
            {
                posma = i;
                ma = v[i];
            }
            if (v[i] < mi)
            {
                posmi = i;
                mi = v[i];
            }
        }
        if ((pos + zero) == n || (neg + zero) == n)
        {
            if ((pos + zero) == n)
            {
                cout << n - 1 << endl;
                for (int i = 1; i < n; i++)
                {
                    cout << i + 1 << " " << i << endl;
                }
            }
            else
            {
                cout << n - 1 << endl;
                for (int i = n - 2; i >= 0; i--)
                {
                    cout << i + 2 << " " << i + 1 << endl;
                }
            }
        }
        else
        {
            vector<pair<int, int>> ansmi, ansma;
            int ma_count = 0, mi_count = 0;
            int tempma = ma;
            int tempmi = mi;
            while (tempma < abs(mi))
            {
                tempma += ma;
                ansma.push_back({posma + 1, posma + 1});
                ma_count++;
            }
            while (ma > abs(tempmi))
            {
                ansmi.push_back({posmi + 1, posmi + 1});
                tempmi += mi;
                mi_count++;
            }
            int min_c = mi_count + pos;
            int max_c = ma_count + neg;
            vector<int> b = v;
            for (int i = 0; i < n; i++)
            {
                if (v[i] > 0)
                {
                    min_c++;
                    ansmi.push_back({i + 1, posmi + 1});
                    v[i] += tempmi;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                if (v[i] > v[i + 1])
                {
                    v[i] += v[i + 1];
                    ansmi.push_back({i + 2, i + 1});
                    min_c++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (b[i] < 0)
                {
                    max_c++;
                    b[i] += tempma;
                    ansma.push_back({i + 1, posma + 1});
                }
            }
            for (int i = 1; i < n; i++)
            {
                if (b[i] < b[i - 1])
                {
                    b[i] += b[i - 1];
                    ansma.push_back({i + 1, i});
                    max_c++;
                }
            }
            if (max_c <= min_c)
            {
                cout << max_c << endl;
                for (int i = 0; i < ansma.size(); i++)
                {
                    cout << ansma[i].first << " " << ansma[i].second << endl;
                }
            }
            else
            {

                cout << min_c << endl;
                for (int i = 0; i < ansmi.size(); i++)
                {
                    cout << ansmi[i].first << " " << ansmi[i].second << endl;
                }
            }
        }
    }
    return 0;
}
