#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int TESTCASES;
    cin >> TESTCASES;
    while (TESTCASES--)
    {
        int n, k;
        cin >> n >> k;
        cout << 2 + (n - 2) / k << endl;
    }
    return 0;
}