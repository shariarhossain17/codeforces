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

    vector<ll> a(n), v(n);

    array_input_int(a, 0, n);
    array_input_int(v, 0, n);

    ll ans = 0;

    ll mn1 = *min_element(a.begin(), a.end());
    ll mn2 = *min_element(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {

        ll c = a[i] - mn1;
        ll d = v[i] - mn2;

        ans += max(c, d);
    }

    cout << ans << endl;
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