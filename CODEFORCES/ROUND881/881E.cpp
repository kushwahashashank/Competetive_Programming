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
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int q;
        cin >> q;
        vector<int> arr(q);
        for (int i = 0; i < q; i++)
        {
            cin >> arr[i];
        }
    }
    return 0;
}