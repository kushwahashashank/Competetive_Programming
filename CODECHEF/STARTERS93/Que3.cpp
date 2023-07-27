#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string &s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        ll int n;
        cin >> n;
        ll int arr[n];
        unordered_map<ll int, ll int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        vector<ll int> v;
        for (int i = 0; i < pow(2, 15); i++)
        {
            string a = to_string(i);
            if (isPalindrome(a))
            {
                v.push_back(i);
            }
        }
        ll int ans = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < v.size(); i++)
            {
                ans += m[(v[i] ^ arr[j])];
            }
            m[arr[j]]--;
        }
        cout << ans << endl;
    }
    return 0;
}