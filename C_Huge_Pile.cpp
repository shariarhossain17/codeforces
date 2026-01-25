#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << "\n";
        return;
    }

    queue<pair<long long int, int>> q;
    set<long long> visited;

    q.push({n, 0});
    visited.insert(n);

    while (!q.empty())
    {
        int x = q.front().first;
        int l = q.front().second;
        q.pop();

        if (x == k)
        {
            cout << l << "\n";
            return;
        }

        if (x <= 1)
            continue;

        long long a = x / 2;
        long long b = (x + 1) / 2;

        if (!visited.count(a))
        {
            q.push({a, l + 1});
            visited.insert(a);
        }
        if (!visited.count(b))
        {
            q.push({b, l + 1});
            visited.insert(b);
        }
    }

    cout << -1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
