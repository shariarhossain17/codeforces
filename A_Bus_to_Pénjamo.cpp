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
    int n, r;
    cin >> n >> r;
    vector<int> arr(n);
    int leftalone = 0;
    int happy = 0;
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
        happy += (arr[k] / 2) * 2;
        r -= arr[k] / 2;
        leftalone += arr[k] % 2;
    }
    if (leftalone > r)
        happy += r * 2 - leftalone;
    else
        happy += leftalone;
    cout << happy << endl;
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