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

    vi a(n);

    array_input_int(a, 0, n);

    int pos = n - 1;

    while (pos > 0 and a[pos - 1] >= a[pos])
    {
        pos--;
    }
    while (pos > 0 and a[pos - 1] <= a[pos])
    {
        pos--;
    }

    cout << pos << endl;
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