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
        string s[n];
        int AB = 0, B = 0, O = 0, A = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == "A")
            {
                A++;
            }
            else if (s[i] == "B")
            {
                B++;
            }
            else if (s[i] == "O")
            {
                O++;
            }
            else
            {
                AB++;
            }
        }
        int a = A + AB + O, b = B + AB + O;
        cout << max(a, b) << endl;
    }
    return 0;
}