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

    set<int> S;
    vector<int> A(n);
    for (auto &x : A)
    {
        cin >> x;
        S.insert(x);
    }
    int ans = 1e9;
    for (auto &x : A)
    {
        if (x >= S.size())
        {
            ans = min(ans, x);
        }
    }
    cout << ans << "\n";
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