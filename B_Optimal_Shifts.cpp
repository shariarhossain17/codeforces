#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    s = s + s;

    int cur = 0, res = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == '1')
            cur = 0;
        else
            cur++;
        res = max(cur, res);
    }

    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}