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

    int n, m;
    cin >> n >> m;

    vector<ll> v(n);
    array_input_int(v, 0, n);

    vector<ll> pre(n, 0);
    vector<ll> suf(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            pre[i] = pre[i - 1] + (v[i - 1] - v[i]);
        }
        else
        {
            pre[i] = pre[i - 1];
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            suf[i] = suf[i + 1] + abs(v[i] - v[i + 1]);
        }
        else
        {
            suf[i] = suf[i + 1];
        }
    }

    while (m--)
    {
        int s1, t1;
        cin >> s1 >> t1;

        s1--;
        t1--;

        if (s1 > t1)
        {
            cout << abs(suf[s1] - suf[t1]) << endl;
        }
        else
        {
            cout << abs(pre[s1] - pre[t1]) << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}