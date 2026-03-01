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
    ll d, b, c;
    cin >> d >> b >> c;

    vector<int> a;

    a.push_back(d);
    a.push_back(b);
    a.push_back(c);

    sort(a.begin(), a.end());
    if (a[1] != a[2])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << a[0] << " " << a[0] << " " << a[2] << endl;
    }
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