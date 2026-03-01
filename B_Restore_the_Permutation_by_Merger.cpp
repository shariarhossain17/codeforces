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

    vector<int> arr(2 * n);

    array_input_int(arr, 0, 2 * n);

    vector<bool> vis(n + 1, false);

    vi ans;

    for (int i = 0; i < 2 * n; i++)
    {
        if (!vis[arr[i]])
        {
            ans.push_back(arr[i]);
            vis[arr[i]] = true;
        }
    }

    for (auto i : ans)
        cout << i << " ";
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