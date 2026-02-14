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

    int n, k;
    cin >> n >> k;

    vi a(n), b(n);

    array_input_int(a, 0, n);

    array_input_int(b, 0, n);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    int j = 0;

    for (int i = 0; i < n && k > 0; i++)
    {
        if (b[i] > a[i])
        {
            sum -= a[i];
            sum += b[j];
            j++;
            k--;
        }
        else
            break;
    }

    cout << sum << endl;
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