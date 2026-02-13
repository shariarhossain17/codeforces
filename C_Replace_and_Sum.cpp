#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"

#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
        cin >> a[i];

void solve()
{
    int n, q;
    cin >> n >> q;

    vi a(n), b(n);

    array_input_int(a, 0, n);
    array_input_int(b, 0, n);

    for (int i = 0; i < n; i++)
        a[i] = max(a[i], b[i]);

    for (int i = n - 2; i >= 0; i--)
        a[i] = max(a[i], a[i + 1]);

    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + a[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << pre[r] - pre[l - 1] << " ";
    }

    newLine;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
