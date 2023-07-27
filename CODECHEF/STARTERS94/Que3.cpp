#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isvovel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    return false;
}
int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v;
        int x = 0;
        int temp = 1;
        int i = 0;
        while (i < n)
        {
            while (i < n && x < k)
            {
                if (isvovel(s[i]))
                {
                    x++;
                }
                i++;
            }
            while (i < n && !isvovel(s[i]))
            {
                temp++;
                i++;
            }
            if (i < n)
            {
                v.push_back(temp);
            }
            x = 0;
            temp = 1;
        }
        ll int m = 1e9 + 7;
        ll int ans = 1;
        for (int i = 0; i < v.size(); i++)
        {
            ans = (ans % m * v[i] % m) % m;
        }
        cout << ans << endl;
    }
    return 0;
}