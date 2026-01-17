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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n / 2 - 1; i >= 1; i--)
    {
        if (a[i] == a[i + 1] || a[n - i + 1] == a[n - i])
        {
            swap(a[i], a[n - i + 1]);
        }
    }
    int re = 0;
    for (int i = 1; i < n; i++)
    {
        re += (a[i] == a[i + 1]);
    }
    cout << re << endl;
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