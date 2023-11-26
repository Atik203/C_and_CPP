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
#define rf(i, n, s) for (long long int i = n - 1; i >= s; i--)
#define pb emplace_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define vli vector<vll>

vli adj;
vll dp;

ll min_operations(ll curr, string &s)
{
    char label = s[curr - 1];
    ll mn = INT_MAX;

    if (curr == 0)
    {
        return INT_MAX;
    }

    ll l = adj[curr][0];
    ll r = adj[curr][1];

    if (l == 0 && r == 0)
    {
        return 0;
    }

    if (dp[curr] > -1)
    {
        return dp[curr];
    }

    if (label == 'U')
    {
        mn = min(mn, 1 + min_operations(l, s));
        mn = min(mn, 1 + min_operations(r, s));
    }
    else if (label == 'L')
    {
        mn = min(mn, min_operations(l, s));
        mn = min(mn, 1 + min_operations(r, s));
    }
    else
    {
        mn = min(mn, 1 + min_operations(l, s));
        mn = min(mn, min_operations(r, s));
    }

    return dp[curr] = mn;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        adj.clear();
        dp.clear();
        dp.resize(n + 1, -1);
        adj.resize(n + 1);
        string s;
        cin >> s;

        f(i, 0, n)
        {
            ll l, r;
            cin >> l >> r;
            adj[i + 1].pb(l);
            adj[i + 1].pb(r);
        }

        cout << min_operations(1, s) << endl;
    }

    return 0;
}
