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

    vi sufMaxPos(n);

    sufMaxPos[n - 1] = n - 1;

     for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] > v[sufMaxPos[i + 1]])
            sufMaxPos[i] = i;
        else
            sufMaxPos[i] = sufMaxPos[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        int pos = sufMaxPos[i];

        if (v[pos] > v[i])
        {
            reverse(v.begin() + i, v.begin() + pos + 1);
            break;
        }
    }

    for (auto x : v)
        cout << x << " ";
    newLine;
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