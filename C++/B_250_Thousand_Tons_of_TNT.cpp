
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, mn, mx, ans;
        cin >> n;
        s = 0;
        vector<ll> v(n + 1), d;
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
            s += v[i];
            v[i] = s;
        }
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                d.push_back(i);
                d.push_back(n / i);
            }
        }
        ans = 0;
        for (auto &&it : d)
        {
            mn = 1e18, mx = 0;
            for (ll i = it; i <= n; i += it)
            {
                mn = min(mn, v[i] - v[i - it]);
                mx = max(mx, v[i] - v[i - it]);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << '\n';
    }

    return 0;
}