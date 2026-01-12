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

    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll sum = 0;
    for (int i = 2; i <= n; i++)
        sum += abs(a[i] - a[i - 1]);

    ll ans = min(sum - abs(a[2] - a[1]), sum - abs(a[n] - a[n - 1]));
    for (int i = 2; i < n; i++)
    {
        ans = min(ans, sum - abs(a[i + 1] - a[i]) - abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i - 1]));
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