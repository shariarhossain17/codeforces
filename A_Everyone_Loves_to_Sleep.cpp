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
    int n, H, M;
    cin >> n >> H >> M;

    int start = H * 60 + M;
    int ans = 1440;

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;

        int alarm = h * 60 + m;

        if (alarm < start)
            alarm += 1440;

        ans = min(ans, alarm - start);
    }

    cout << ans / 60 << " " << abs((ans / 60) * 60 - ans) << "\n";
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