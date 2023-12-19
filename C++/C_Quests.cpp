#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define endl '\n'
#define f(i, s, n) for (long long int i = s; i < n; i++)
#define cf(i, s, n) for (long long int i = s; i <= n; i++)
#define rf(i, s, n) for (long long int i = n - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(a) sort(a.begin(), a.end())
#define All(a, n) sort(a, a + n);
#define rall(a) sort(a.rbegin(), a.rend())

void solve()
{
    int n, k;
    cin >> n >> k;

    vi a(n), b(n);

    f(i, 0, n)
    {
        cin >> a[i];
    }

    f(i, 0, n)
    {
        cin >> b[i];
    }

    ll ans = 0;
    ll result = 0;
    ll mx = 0;

    f(i, 0, n)
    {
        if (k == i)
        {
            break;
        }
        ans += a[i];
        mx = max(mx, static_cast<ll>(b[i]));
        result = max(ans + (k - i - 1) * mx, result);
    }

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
