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
    vi v(n);

    array_input_int(v, 0, n);

    if (n == 1)
    {
        cout << 0;
        newLine;

        return;
    }

    int cmx = 0;

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        if (v[i] == mx)
            cmx++;
    }

    int res = n - cmx;
    cout << res << "\n";
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